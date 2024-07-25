import math


def max_fill(grid, capacity):
    total_water = 0
    left_max = [max(row) for row in grid]
    right_max = [max(row)[::-1] for row in grid][::-1]

    for i in range(len(grid)):
        left_height = left_max[i]
        right_height = right_max[i]

        while True:
            if left_height <= 0 or right_height <= 0:
                break
            min_height = min(left_height, right_height)

            if left_height < right_height:
                left_height -= 1
            else:
                right_height -= 1

            total_water += min_height

    return math.ceil(total_water / (capacity + len(grid) * len(grid[0]) - total_water))