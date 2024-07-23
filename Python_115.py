```
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))

grid = [[1, 2, 3], [4, 5, 6]]
capacity = 10

print(max_fill(grid, capacity))