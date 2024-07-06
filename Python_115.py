```
def max_fill(grid, capacity):
    max_amount = 0
    for row in grid:
        water_amounts = [min(capacity // 2, (row[i] + row[-i - 1]) // 2) if i % 2 == 1 else min(row[i], row[-i - 1]) for i in range((len(row) + 1) // 2)]
        max_amount += sum(water_amounts)
    return max_amount