def max_fill(grid, capacity):
    count = 0
    for row in grid:
        for i in range(len(row)):
            if row[i] == 1 and capacity > 0:
                count += 1
                capacity -= 1
    return count