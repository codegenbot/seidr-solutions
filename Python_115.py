import math

def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))
    return total_buckets

if __name__ == "__main__":
    print(max_fill([[[1, 2], [3, 4]]], 5))