import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)

if __name__ == "__main__":
    grid = [[1, 2], [3, 4]]
    capacity = 5
    print(max_fill(grid, capacity))