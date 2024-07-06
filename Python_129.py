```
def minPath(grid, k):
    n = len(grid)
    queue = [(0, 0, [])]
    visited = set((0, 0))
    path_lengths = {}
    
    while queue:
        x, y, path = queue.pop(0)
        
        if len(path) > k: 
            continue
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            
            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                new_path = path + [grid[nx][ny]]
                
                if len(new_path) not in path_lengths or len(new_path) < path_lengths[len(new_path)]:
                    queue.append((nx, ny, new_path))
                    visited.add((nx, ny))
                    path_lengths[len(new_path)] = len(new_path)
                    
    min_sum = float('inf')
    result = []
    
    for path in queue:
        if sum(path[1:]) == k:
            if sum(path[1:]) < min_sum:
                min_sum = sum(path[1:])
                result = path
    
    return result