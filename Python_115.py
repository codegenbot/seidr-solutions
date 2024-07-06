def max_fill(grid, capacity):
    water_amounts = []
    for row in grid:
        walls = [len(row), len(row) - 1]
        water_amount = min(walls[0], walls[1]) // capacity
        water_amounts.append(water_amount)
    return sum(water_amounts)