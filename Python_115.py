import math
def max_fill():
    rows = int(input("Enter number of rows: "))
    if rows <= 0:
        return 
    grid = [list(map(int, input().split())) for _ in range(rows)]
    
    capacity = int(input("Enter bucket capacity: "))
    if capacity <= 0:
        return 
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

print(max_fill())