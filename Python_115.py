```
import math

grid = [[int(x) for x in input().split()] for _ in range(int(input()))]
capacity = int(input())

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed

print(max_fill(grid, capacity))