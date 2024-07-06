import math
def max_fill():
    num_rows = int(input("Enter number of rows: "))
    grid = [list(map(int, input().split())) for _ in range(num_rows)]
    capacity = int(input("Enter bucket capacity: "))
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

print(max_fill())