```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(cell for row in grid for cell in row if cell > 0)

    for i in range(cols):
        for j in range(rows):
            if grid[j][i] > 0 and grid[j][i] <= capacity:
                amount_to_fill = min(grid[j][i], capacity)
                grid[j][i] -= amount_to_fill
                capacity -= amount_to_fill

    remaining_capacity = capacity
    for row in grid:
        for cell in row:
            if cell > 0:
                remaining_water = min(cell, remaining_capacity)
                total_water += remaining_water
                remaining_capacity -= remaining_water

    return math.ceil(total_water / (capacity + rows * cols - total_water))