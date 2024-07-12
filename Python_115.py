def max_fill(n, capacity_grid):
    import math

    total_water = 0
    max_capacity = float("inf")

    for i in range(len(capacity_grid)):
        if isinstance(capacity_grid[i], list):
            total_water += sum(capacity_grid[i])
            max_capacity = min(max_capacity, min(capacity_grid[i]))
        elif isinstance(capacity_grid[i], int):
            total_water += capacity_grid[i]
            max_capacity = min(max_capacity, capacity_grid[i])

    return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0