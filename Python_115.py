def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_amount = sum([sum(row) for row in grid])

    total_steps = math.ceil(water_amount / capacity)

    return total_steps