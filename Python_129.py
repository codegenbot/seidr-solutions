def minPath(grid, k):
    N = len(grid)
    path = []
    visited = [[False] * N for _ in range(N)]
    
    def dfs(i, j, count):
        if count == k:
            return True
        
        if i < 0 or i >= N or j < 0 or j >= N or visited[i][j]:
            return False
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        if dfs(i+1, j, count+1) or dfs(i-1, j, count+1) or dfs(i, j+1, count+1) or dfs(i, j-1, count+1):
            return True
        
        visited[i][j] = False
        path.pop()
        
        return False
    
    for i in range(N):
        for j in range(N):
            if dfs(i, j, 1):
                return path