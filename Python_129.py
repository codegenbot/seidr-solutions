def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    res = []
    
    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return
        
        visited[i][j] = True
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                dfs(x, y, path + [grid[x][y]])
        visited[i][j] = False
    
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])
    
    return res