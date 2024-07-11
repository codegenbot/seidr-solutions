```
from collections import deque

def minPath(grid, k):
    n = len(grid)
    res = []
    
    for _ in range(k):
        queue = deque([(i, j, i * n + j) for i in range(n) for j in range(n)])
        visited = set()
        cur_min = float("inf")
        
        while queue:
            x, y, cell = queue.popleft()
            
            if (x, y, cell) not in visited:
                visited.add((x, y, cell))
                min_val = grid[x][y]
                
                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    
                    if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] != -1:
                        new_cell = nx * n + ny
                        queue.append((nx, ny, new_cell))
                        min_val = min(min_val, grid[nx][ny])
                
                cur_min = min(cur_min, cell + min_val)
        
        res.append(cur_min)
    
    return res