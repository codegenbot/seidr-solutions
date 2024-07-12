```
def max_fill(n, capacity_grid):
    import math

    total_water = 0
    max_capacity = float("inf")

    for item in capacity_grid:
        if isinstance(item, list):
            total_water += sum(item)
            max_capacity = min(max_capacity, min(item))
        elif isinstance(item, int):
            total_water += item
            max_capacity = min(max_capacity, item)

    return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0