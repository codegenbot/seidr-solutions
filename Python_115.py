import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(cell for cell in row if cell < capacity)
    return (
        total_water
        if total_water <= capacity
        else (total_water - (capacity * (math.ceil((total_water - 1) / capacity))) + 1)
    )