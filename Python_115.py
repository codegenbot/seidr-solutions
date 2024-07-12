```
import math
def max_fill(n, capacity_grid):
    total_water = 0
    max_capacity = float('inf')  

    for value in capacity_grid:
        if isinstance(value, list):  
            total_water += sum(value)
            max_capacity = min(max_capacity, min(value))  
        elif isinstance(value, int):  
            total_water += value
            max_capacity = min(max_capacity, value)  

    return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0