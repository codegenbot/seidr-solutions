import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

if __name__ == "__main__":
    assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9) == 2, "Test case 1 failed"
    assert max_fill([[2, 3], [4, 5]], 7) == 2, "Test case 2 failed"
    assert max_fill([[1]], 5) == 1, "Test case 3 failed"
    assert max_fill([[0]], 3) == 0, "Test case 4 failed"
    assert max_fill([[1, 1, 1, 1, 1]], 3) == 2, "Test case 5 failed"
    print("All test cases passed")