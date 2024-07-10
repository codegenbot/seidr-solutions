def max_fill(grid, capacity):
    total_water = sum(
        sum(
            min(capacity - cell, row_capacity)
            for cell, row_capacity in zip(row, [capacity] * len(row))
        )
        for row in grid
    )
    return total_water / capacity * math.ceil(total_water / capacity)