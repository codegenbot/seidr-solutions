def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True

        if i < 0 or i >= n or j < 0 or j >= n or visited[i][j]:
            return False

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if dfs(ni, nj, path + [grid[ni][nj]]):
                return True

        visited[i][j] = True
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]]):
                return res