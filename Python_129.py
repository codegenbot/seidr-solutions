```
def minPath(grid):
    n = len(grid)
    
    def dfs(i, j, length, path):
        if i < 0 or i >= n or j < 0 or j >= n:
            return []
        
        if grid[i][j] == 'X':
            return []
        
        new_path = path + [grid[i][j]]
        min_len = float('inf')
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            
            if grid[ni][nj] == 'X':
                continue
            
            new_path_length = len(new_path)
            min_path = dfs(ni, nj, new_path_length + 1, new_path)
            
            if min_path and (min_len > len(min_path) or (min_len == len(min_path) and min_path < new_path)):
                min_len = len(min_path)
                shortest_path = min_path
        return shortest_path
    
    shortest_path = []
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0, [])
            
            if path and (not shortest_path or path < shortest_path):
                shortest_path = path
    
    return shortest_path