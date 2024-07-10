```
def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    m.sort(key=lambda x: grid[x[0]][x[1]])
    
    path = [grid[m[0][0]][m[0][1]]]
    current_cell = (m[0][0], m[0][1])
    visited_cells = set([current_cell])
    
    for _ in range(k - 1):
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        next_cells = []
        
        for d in directions:
            new_x, new_y = current_cell[0] + d[0], current_cell[1] + d[1]
            
            if 0 <= new_x < n and 0 <= new_y < n and (new_x, new_y) not in visited_cells:
                next_cells.append((new_x, new_y))
        
        min_val = float('inf')
        min_next_cell = None
        
        for cell in next_cells:
            val = grid[cell[0]][cell[1]]
            if val < min_val and (val, *cell) not in [x for x in m if x != current_cell]:
                min_val = val
                min_next_cell = cell
        
        path.append(min_val)
        visited_cells.add(tuple(min_next_cell))
        current_cell = min_next_cell
    
    return path