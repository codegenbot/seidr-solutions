```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            if not result or sorted(result) > sorted(path):
                result = path
            return

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, path + [grid[ni][nj]])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])
            visited[i][j] = False

    return result