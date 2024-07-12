def minPath(grid, k):
    n = len(grid)
    res = []
    
    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return
        
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in set(zip(*[grid[:i], grid[i:]])):
                dfs(x, y, path + [grid[x][y]])
    
    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    
    return res