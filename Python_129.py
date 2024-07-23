```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if total == k:
            res.append(path)
            return
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = path + [grid[i][j]]
                dfs(ni, nj, new_path, total + grid[i][j])
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [], 0)
    return res