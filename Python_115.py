def max_fill(n, capacity_grid):
    total_water = sum(sum(sublist) for sublist in capacity_grid)
    max_capacity = min(sublist for sublist in capacity_grid if isinstance(sublist, list) and len(sublist)>0)
    return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0