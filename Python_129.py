```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    res = []
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return
        
        visited[i][j] = True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+di, j+dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, path+[grid[ni][nj]])
        visited[i][j] = False
    
    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])
    
    return res