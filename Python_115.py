```
def max_fill(n, capacity_grid):
    if not isinstance(capacity_grid, list) or len(capacity_grid) == 0:
        return "Invalid grid"
    
    for row in capacity_grid:
        if not isinstance(row, list) or len(row) == 0:
            return "Invalid grid"

    total_water = sum(sum(sublist) for sublist in capacity_grid)
    max_capacity = min(min(sublist) for sublist in capacity_grid)
    return math.ceil(total_water / (n * max_capacity))