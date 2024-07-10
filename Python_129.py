def minPathSum(grid):
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    def dfs(i, j, path, visited):
        if (i, j) == (n - 1, n - 1):
            return sum(path) + grid[i][j]
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [grid[ni][nj]]
                new_path.sort()
                if min_path is None or sum(new_path) < sum(min_path):
                    min_path = new_path
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                m[i][j] = sum(min_path)
        return min_path[0] if min_path else None

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [], set())
            if res is not None:
                grid[i][j] = res
            m[i][j] = sum(minPath)
    return m[-1][-1]