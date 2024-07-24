import math
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_cycles = math.ceil(total_water / float(capacity))
    return max_cycles

grid = eval(input("Enter the grid (list of lists): "))
capacity = int(input("Enter the capacity: "))

result = max_fill(grid, capacity)

print(result)