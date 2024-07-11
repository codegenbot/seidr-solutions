```
import math

grid = []
while True:
    row = input("Enter the row (press 'done' when finished): ")
    if row.lower() == 'done':
        break
    grid.append([int(x) for x in row.split()])
    
capacity = int(input("Enter the bucket capacity: "))

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed

print(max_fill(grid, capacity))