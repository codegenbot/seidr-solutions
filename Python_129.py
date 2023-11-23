def minPath(grid, k):
    grid_size = len(grid)
    path = [grid[0][0]]
    current_cell = (0, 0)
    
    while len(path) < k:
        neighbors = []
        row, col = current_cell
        if row > 0:
            neighbors.append((row-1, col))
        if row < grid_size-1:
            neighbors.append((row+1, col))
        if col > 0:
            neighbors.append((row, col-1))
        if col < grid_size-1:
            neighbors.append((row, col+1))
        
        min_value = float('inf')
        next_cell = None
        
        for neighbor in neighbors:
            neighbor_row, neighbor_col = neighbor
            neighbor_value = grid[neighbor_row][neighbor_col]
            
            if neighbor_value < min_value:
                min_value = neighbor_value
                next_cell = neighbor
        
        current_cell = next_cell
        path.append(grid[current_cell[0]][current_cell[1]])
    
    return path