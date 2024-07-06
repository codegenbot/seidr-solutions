```
import heapq

def minPath(grid, k):
    n = len(grid)
    
    if any(len(row) != n for row in grid):  
        return []
        
    queue = [(0, [], 0)]  
    visited = set((0, 0))  
    
    while queue:
        path_len, path, path_sum = heapq.heappop(queue)
        
        if path_sum == k: 
            return path

        if len(path) > k: 
            continue
            
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = ny+dx, x+dy
            
            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                heapq.heappush(queue, (path_len + 1, path + [grid[nx][ny]], path_sum + grid[nx][ny]))
                visited.add((nx, ny))
                
    return []