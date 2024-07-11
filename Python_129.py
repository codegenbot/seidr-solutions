```
from collections import deque

def minPath(grid, k):
    n = len(grid)
    
    for _ in range(k):
        queue = deque([(i, j, i * n + j) for i in range(n) for j in range(n)])
        visited = set()
        res = []
        
        while queue:
            x, y, cell = queue.popleft()
            
            if (x, y, cell) not in visited:
                visited.add((x, y, cell))
                
                min_val = float("inf")
                
                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    
                    if 0 <= nx < n and 0 <= ny < n:
                        min_val = min(min_val, grid[nx][ny])
                
                res.append(min_val)
                
    return res