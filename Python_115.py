```python
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        left_max = right_max = 0
        for j in range(len(grid[0])):
            if grid[i][j] < left_max:
                total_water += (left_max - grid[i][j])
            else:
                left_max = grid[i][j]
            if i < len(grid) - 1 and grid[i][j] < right_max:
                total_water += (right_max - grid[i][j])
            else:
                right_max = grid[i][j]
    return math.ceil(total_water / (capacity + sum(len(row) for row in grid) * len(grid) - total_water))