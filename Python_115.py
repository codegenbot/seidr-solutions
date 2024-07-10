```
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
    for col in range(cols):
        if min_col[col] > 0:
            if col < cols-1 and grid[row][col] > 0: 
                total_left += grid[row][col]
                right -= grid[row][col]
            else:
                total_right -= grid[row][col]
                left -= grid[row][col]

    max_fill = max(max_fill, min(total_left, capacity) + min(total_right, capacity))

return max_fill