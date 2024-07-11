```
def minPath(grid):
    n = len(grid)
    
    def dfs(i, j, length, current_path):
        if i < 0 or i >= n or j < 0 or j >= n:
            return []
        
        visited = [[False] * (n) for _ in range(n)]
        visited[i][j] = True
        
        min_length = float('inf')
        min_path = None
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, length + 1, current_path + [grid[i][j]])
                
                if new_path and len(new_path) < min_length:
                    min_length = len(new_path)
                    min_path = new_path
        
        return min_path
    
    min_length = float('inf')
    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0, [])
            
            if path and len(path) < min_length:
                min_length = len(path)
                min_path = path
    
    return min_path