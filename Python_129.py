def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = []
    
    def dfs(i, j, length):
        if length == k:
            return True
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        if i > 0 and not visited[i-1][j]:
            if dfs(i-1, j, length+1):
                return True
        
        if i < n-1 and not visited[i+1][j]:
            if dfs(i+1, j, length+1):
                return True
        
        if j > 0 and not visited[i][j-1]:
            if dfs(i, j-1, length+1):
                return True
        
        if j < m-1 and not visited[i][j+1]:
            if dfs(i, j+1, length+1):
                return True
        
        visited[i][j] = False
        path.pop()
        return False
    
    for i in range(n):
        for j in range(m):
            if dfs(i, j, 1):
                return path