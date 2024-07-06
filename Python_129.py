```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path = []
    
    def dfs(i, j, p):
        nonlocal path
        if len(p) == k:
            return p
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_p = dfs(ni, nj, p + [grid[ni][nj]])
                if not path or new_p < path:
                    path = new_p
        visited[i][j] = False
        return path
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
    
    return path