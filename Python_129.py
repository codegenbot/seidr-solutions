def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        
        visited[i][j] = True
        path.append(grid[i][j])
        
        neighbors = []
        if i > 0 and not visited[i-1][j]:
            neighbors.append((i-1, j))
        if i < n-1 and not visited[i+1][j]:
            neighbors.append((i+1, j))
        if j > 0 and not visited[i][j-1]:
            neighbors.append((i, j-1))
        if j < m-1 and not visited[i][j+1]:
            neighbors.append((i, j+1))
        
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        
        for nei in neighbors:
            res = dfs(nei[0], nei[1], path)
            if res:
                return res
        
        visited[i][j] = False
        path.pop()
    
    for i in range(n):
        for j in range(m):
            res = dfs(i, j, [])
            if res:
                return res