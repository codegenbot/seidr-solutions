```
def max_fill(grid, capacity):
    total_water = sum(1 if cell == 1 else 0 for row in grid for cell in row)
    filled_containers = 0
    remaining_capacity = capacity
    for row in grid:
        for cell in row:
            if cell == 1 and remaining_capacity > 0:
                filled_containers += 1
                remaining_capacity -= 1
    return total_water // min(total_water, remaining_capacity * len(grid) * len(grid[0]))