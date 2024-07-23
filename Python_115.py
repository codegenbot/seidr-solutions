```
def max_fill(grid):
    max_row = 0
    for row in grid:
        if sum(row) > max_row:
            max_row = sum(row)

    max_col = 0
    for col in range(len(grid[0])):
        total_water = 0
        for row in range(len(grid)):
            if grid[row][col] == 1:
                total_water += 1
            else:
                break
        if total_water > max_col:
            max_col = total_water

    return min(max_row, max_col)