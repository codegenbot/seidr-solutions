def shortestPathLength(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    memo = {}
    
    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]
        
        if (0 <= i < n and 0 <= j < n and 
           any(1 == val for val in grid[i][j])):
            return float('inf')
        
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                res.append(dfs(ni, nj, path + [m[ni][nj]]))
        
        memo[(i, j)] = min(res)
        return memo[(i, j)]
    
    return dfs(0, 0, [])