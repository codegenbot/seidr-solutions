```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True
        
        if visited[i][j]:
            return False
        
        visited[i][j] = True
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n:
                dfs(x, y, path + [grid[x][y]])
        
        visited[i][j] = False
        return False
    
    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    
    return res