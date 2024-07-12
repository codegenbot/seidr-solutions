```
import math
def max_fill(n, capacity_grid):
    total_water = sum(sum(sublist) for sublist in capacity_grid if isinstance(sublist, list))
    if any(not isinstance(i, list) for i in capacity_grid):
        return sum(sub[0] for sub in capacity_grid if isinstance(sub, list)) / (n * min(min(sublist) for sublist in capacity_grid if isinstance(sublist, list)))
    else:
        max_capacity = min(min(sublist) for sublist in capacity_grid if isinstance(sublist, list))
        return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0