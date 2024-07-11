def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []
    
    def dfs(i, j, length):
        nonlocal path
        if length == k:
            return [grid[i][j]]
        
        if length > k:
            return []
        
        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = None
        
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, length + 1)
                
                if new_path and (not res or new_path + [grid[i][j]] < res):
                    res = new_path + [grid[i][j]]
        
        visited[i][j] = False
        return res
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0)
            
            if path:
                break
            
        if path:
            break
    
    return path