```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                p = dfs(ni, nj, path + [grid[ni][nj]])
                if p:
                    return p
                visited[ni][nj] = False
        return None

    res = []
    for i in range(N):
        for j in range(N):
            visited[i][j] = True
            p = dfs(i, j, [grid[i][j]])
            if p and (not res or p < res):
                res = p
            visited[i][j] = False

    return res