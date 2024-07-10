def minPathSum(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if (i, j) == (n - 1, n - 1):
            return sum(path)
        path.append(m[i][j])
        min_path = float("inf")
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path[:]
                new_path.append(m[ni][nj])
                new_path.sort()
                min_path = min(min_path, dfs(ni, nj, new_path))
        return min_path

    return dfs(0, 0, [])