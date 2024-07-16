import math

def calculate_water(grid, total_water):
    input_max_fill = math.ceil(total_water / (len(grid) * len(grid[0])))
    return input_max_fill

def check(result):
    print(result)

grid = [[1,2,3],[4,5,6]]
total_water = 20

result = calculate_water(grid, total_water)
check(result)