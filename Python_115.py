def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    used_capacity = 0
    times = -(
        -total_water // capacity
    )  # equivalent to math.ceil(total_water / capacity)
    return times