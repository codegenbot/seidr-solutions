```
def max_fill(grid):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    for i in range(len(grid)):
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while left < right and min_height_left <= min_height_right:
            water_level = min(min_height_left, min_height_right)
            total_water += (right - left) * water_level
            if min_height_left < min_height_right:
                left += 1
            else:
                right -= 1
    return total_water

capacity = 9
print(max_fill([[1, 1, 1, 1], [1, 1, 1, 1]]))