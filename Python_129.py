```
def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    
    visited = set((0, 0))
    path = [m[0][0]]
    
    for _ in range(k):
        next_val = float('inf')
        next_cell = None
        
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + 0, y + 0
            
            while 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                if m[nx][ny] < next_val:
                    next_val = m[nx][ny]
                    next_cell = (nx, ny)
                nx += x
                ny += y
        
        path.append(next_val)
        visited.add(next_cell)
    
    return path