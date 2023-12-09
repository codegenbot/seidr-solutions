def minPath(grid):
    n = len(grid)
    m = len(grid[0])
    dp = [[float('inf')] * (m+1) for _ in range(n)]
    
    def recurse(i, j):
        if i == n-1 and j == m-1:
            return 0
        
        min_path = float('inf')
        for k in range(max(0, j-1), min(m-1, j+1)):
            min_path = min(min_path, dp[i][k] + recurse(i+1, k))
        
        return min_path
    
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 0:
                continue
            
            dp[i][j] = recurse(i, j)
    
    return dp[-1][-1]