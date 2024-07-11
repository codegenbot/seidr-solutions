```
def max_fill(grid, capacity):
    total_capacity = 0
    watered_buckets = 0
    
    for row in grid:
        total_capacity += sum(row)
        
        if total_capacity > capacity:
            total_capacity = 0
            watered_buckets += 1
            
    return math.ceil(total_capacity / capacity)