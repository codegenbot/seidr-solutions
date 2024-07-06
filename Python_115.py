def max_fill(grid, capacity):
    max_amount = 0
    for i in range(len(grid)):
        row_capacity = [min(capacity, j) for j in grid[i]]
        water_amounts = [min(row_capacity[j], row_capacity[-j - 1]) - (len(grid[i]) % 2) for j in range(len(row_capacity))]
        max_amount += sum(water_amounts)
    return max_amount