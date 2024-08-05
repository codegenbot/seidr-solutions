import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    
    if total_water == capacity:
        return 0
    
    buckets_needed = math.ceil(total_water / capacity)
    return max(buckets_needed * capacity - total_water, 0)