def minPath(grid, k):
    n = len(grid)
    memo = {}

    def dfs(i, j, path, visited):
        if (i, j) in visited:
            return
        if len(path) == k:
            if tuple(sorted(path)) not in memo or memo[tuple(sorted(path))] > 1:
                memo[tuple(sorted(path))] = 1
                return path
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, path + [grid[ni][nj]], visited | {(i, j), (ni, nj)})
        return []

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                return dfs(i, j, [grid[i][j]], set())