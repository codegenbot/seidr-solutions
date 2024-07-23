import math


def max_fill():
    grid = []
    while True:
        row = input().split()
        if not row[0]:
            break
        grid.append([int(x) for x in row])
    capacity = int(input())
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))