def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = []
    
    def dfs(i, j, count):
        if count == k:
            return True
        if i < 0 or i >= n or j < 0 or j >= m or visited[i][j]:
            return False
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        if dfs(i+1, j, count+1) or dfs(i-1, j, count+1) or dfs(i, j+1, count+1) or dfs(i, j-1, count+1):
            return True
        
        visited[i][j] = False
        path.pop()
        return False
    
    for i in range(n):
        for j in range(m):
            if dfs(i, j, 1):
                return path