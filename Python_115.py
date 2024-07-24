def max_fill(grid):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    for i in range(len(grid)):
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while left < right and min_height_left <= min_height_right:
            if min(min_height_left, min_height_right) > capacity:
                water_level = capacity
            else:
                water_level = min(min_height_left, min_height_right)
            total_water += water_level - ((min_height_left - water_level) + (min_height_right - water_level))
            if min_height_left < min_height_right:
                left += 1
            else:
                right -= 1
            min_height_left = grid[i][left]
            min_height_right = grid[i][right]
    return total_water