```python
def max_fill(grid):
    total_water = 0
    for i in range(len(grid)):
        left = 0
        right = len(grid[0]) - 1
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while left <= right and min_height_left <= min_height_right:
            water_level = min(min_height_left, min_height_right)
            total_water += (right - left) * water_level
            if min_height_left < min_height_right:
                left += 1
            else:
                right -= 1
        min_height_left = grid[i].index(min(grid[i]))
        min_height_right = len(grid[i]) - 1 - grid[i].index(max(grid[i]))
        while min_height_left <= min_height_right:
            water_level = min_height_left
            total_water += (right - left) * water_level
            if min_height_left < min_height_right:
                left += 1
            else:
                right -= 1
    return total_water

print(max_fill([[1, 1, 1, 1], [1, 1, 1, 1]]))