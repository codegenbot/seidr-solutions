import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed


if __name__ == "__main__":
    grid1 = [[2, 4], [5, 3]]
    print(max_fill(grid1, 10))

    grid2 = [[1, 1, 1, 1], [0, 0, 0, 0]]
    print(max_fill(grid2, 6))