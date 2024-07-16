import math

def calculate_water(grid, total_water):
    max_fill = math.ceil(total_water / (len(grid) * len(grid[0])))
    return max_fill

grid = [[1,2,3],[4,5,6]]
total_water = 20

result = calculate_water(grid, total_water)
print(result)