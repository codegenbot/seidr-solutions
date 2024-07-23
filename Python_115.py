import math

def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))
    return total_buckets

if __name__ == "__main__":
    grid = eval(input("Enter your grid (list of lists): "))
    capacity = int(input("Enter the bucket's capacity: "))
    print(max_fill(grid, capacity))