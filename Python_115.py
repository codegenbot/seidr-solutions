def max_fill(grid, capacity):
    max_amount = 0
    for i in range(len(grid)):
        row_capacity = [
            capacity if len(row) % 2 == 1 else capacity // 2 for row in grid[i : i + 1]
        ]
        water_amounts = [
            min(capacity // 2, (row_capacity[j] + row_capacity[-j - 1]) // 2)
            for j in range(len(row_capacity))
        ]
        max_amount += sum(water_amounts)
    return max_amount