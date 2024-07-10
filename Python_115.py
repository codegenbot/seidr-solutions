```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)

    if not grid or not grid[0]:
        return 0

    min_col = [0] * rows
    max_fill = 0

    for col in range(cols):
        for row in range(rows):
            min_col[row] = min(min_col[row], grid[row][col])

    for row in range(rows):
        left, right = 0, 0
        for col in range(cols):
            if grid[row][col] > 0:
                right += grid[row][col]
            else:
                left -= grid[row][col]

        total_left, total_right = 0, 0
        for col in range(min(len(min_col), cols)):
            if min_col[col] > 0:
                if grid[row][col] > 0:
                    total_left += grid[row][col]
                    right -= grid[row][col]
                else:
                    total_right -= grid[row][col]
                    left -= grid[row][col]

        max_fill = max(max_fill, min(total_left, capacity) + min(total_right, capacity))

    return max_fill