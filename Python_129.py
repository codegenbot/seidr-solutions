def get_neighbors(grid, cell):
    neighbors = []
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == cell:
                neighbors.append((row, col))
    return neighbors