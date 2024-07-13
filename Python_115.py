Here is the solution:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water % capacity != 0:
        return -1
    
    needed_buckets = total_water // capacity
    return needed_buckets