import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    
    if total_water <= capacity:
        return 1
    else:
        return max_fill([(grid[i][j]-capacity/int((math.sqrt(len(grid))**2+(len(grid[0])**2)))**(1/2) for j in range(len(grid[0]))],capacity)