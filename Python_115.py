import math

def calculate_water(grid, total_water):
    max_fill = math.ceil(total_water / (len(grid) * len(grid[0])))
    return max_fill

# Read input from user
grid = eval(input("Enter the grid: "))  # Example input: [[5, 4], [3, 2]]
total_water = int(input("Enter total water: "))  # Example input: 10

result = calculate_water(grid, total_water)
print(result)