def minPathSum(grid):
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    def dfs(i, j, path):
        if (i, j) == (n - 1, n - 1):
            return sum(path) + grid[i][j]
        min_path = float("inf")
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [grid[ni][nj]]
                min_path = min(min_path, dfs(ni, nj, new_path))
        return min_path

    return dfs(0, 0, [])