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
        
        if (i < 0 or i >= n or j < 0 or j >= n or visited[i][j]):
            return False
        
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i+x, j+y
            if 0 <= new_i < n and 0 <= new_j < n:
                visited[new_i][new_j] = True
                dfs(new_i, new_j, path + [grid[i][j]])
                visited[new_i][new_j] = False
        
        return False
    
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]])
                visited[i][j] = False
    
    return res