```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    
    def dfs(i, j, path_len):
        if path_len == k:
            return path
        
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                path.append(grid[ni][nj])
                res = dfs(ni, nj, path_len+1)
                if res:
                    return res
                visited[ni][nj] = False
        
        return []
    
    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            res = dfs(i, j, 0)
            if res:
                return res
    
    return []