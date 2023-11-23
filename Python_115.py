def max_fill(grid, capacity):
    import math
    
    total_moves = 0
    
    for row in grid:
        for well in row:
            if well > capacity:
                total_moves += math.ceil(well / capacity)
    
    return total_moves