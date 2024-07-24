def max_fill(grid, capacity):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    for i in range(len(grid)):
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while min_height_left <= min_height_right:
            if min_height_left < min_height_right:
                total_water += capacity
                left += 1
            else:
                total_water += capacity
                right -= 1
            if right > left and min_height_left <= min_height_right:
                min_height_left = grid[i][left]
                min_height_right = grid[i][right]
            elif min_height_left < min_height_right:
                min_height_left = grid[i][left + 1]
                min_height_right = grid[i][right - 1]
        if right > left and min_height_left <= min_height_right:
            total_water += capacity * (right - left)
    return total_water