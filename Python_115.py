def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))


print(max_fill([[1, 2], [3, 4]], 5))
print(max_fill([[10, 20, 30, 40, 50], [60, 70, 80, 90, 100]], [200]))
print(max_fill([[1, 2, 3, 4], [5, 6, 7, 8]], [9]))