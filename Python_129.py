def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                p = dfs(ni, nj, path + [grid[ni][nj]])
                if p:
                    return p
                visited[ni][nj] = False
        return None

    for i in range(n):
        for j in range(n):
            p = dfs(i, j, [])
            if p:
                return p