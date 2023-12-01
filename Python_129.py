def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        neighbors = [(x, y) for x, y in neighbors if 0 <= x < n and 0 <= y < m and not visited[x][y]]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        
        for x, y in neighbors:
            res = dfs(x, y, path)
            if res:
                return res
        
        visited[i][j] = False
        path.pop()
    
    for i in range(n):
        for j in range(m):
            res = dfs(i, j, [])
            if res:
                return res