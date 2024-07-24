```
def max_fill(grid, capacity):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    for i in range(len(grid)):
        min_height_left = grid[i][left]
        min_height_right = grid[i][right]
        while left < right and min_height_left <= min_height_right:
            h = min(min_height_left, min_height_right)
            w = (right - left) * (h - capacity)
            if h > capacity:
                w = 2 * (capacity * (right - left))
            total_water += w
            if min_height_left < min_height_right:
                left += 1
            else:
                right -= 1
    return total_water