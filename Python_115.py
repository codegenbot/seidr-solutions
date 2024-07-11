```
def max_fill(grid, capacity):
    rows, cols = len(grid), len(grid[0])
    total_water = 0
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] <= capacity:
                total_water += grid[r][c]
            else:
                total_water += capacity
                capacity -= grid[r][c]
    return math.ceil(total_water / capacity)