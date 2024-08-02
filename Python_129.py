def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                res.append(dfs(ni, nj, path + [grid[ni][nj]]))
                visited[ni][nj] = False
        return min(res)

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                return dfs(i, j, [grid[i][j]])