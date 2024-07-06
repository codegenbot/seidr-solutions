```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    
    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True
        
        visited[i][j] = True
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                dfs(x, y, curr_path + [grid[x][y]])
        visited[i][j] = False
        return False
    
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])
    
    return path