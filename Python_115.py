```
import math
def max_fill():
    grid = [list(map(int, input().split())) for _ in range(int(input()))]
    capacity = int(input())
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed

print(max_fill())