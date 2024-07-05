import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

if __name__ == "__main__":
    assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9) == 2, "Test case 1 failed"
    assert max_fill([[2, 3], [4, 5]], 7) == 2, "Test case 2 failed"
    print("All test cases passed")