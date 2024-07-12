```
def max_fill(n, capacity_grid):
    total_water = sum(sum(sublist) for sublist in capacity_grid if all(isinstance(x, int) for x in sublist) and len(sublist) > 1)
    if not all(isinstance(i, list) for i in capacity_grid):
        return sum(sub[0] for sub in capacity_grid if isinstance(sub, list)) / (
            n
            * min(
                min(sublist) for sublist in capacity_grid if isinstance(sublist, list)
            )
        )
    else:
        max_capacity = min(
            min(sublist) for sublist in capacity_grid if isinstance(sublist, list)
        )
        return (
            math.ceil(
                sum(sublist for sublist in capacity_grid if isinstance(sublist, list))
                / (n * max_capacity)
            )
            if max_capacity
            else 0
        )