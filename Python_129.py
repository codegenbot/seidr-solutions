def minFallingPathSum(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    memo = {}
    
    def dfs(i, j, path, cnt):
        if (i, j) in memo:
            return memo[(i, j)]
        
        if cnt == n - 1:
            return sum(path)
        
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in memo:
                res.append(dfs(ni, nj, path + [grid[ni][nj]], cnt + 1))
        
        memo[(i, j)] = min(res)
        return memo[(i, j)]
    
    return dfs(0, 0, [], 0)