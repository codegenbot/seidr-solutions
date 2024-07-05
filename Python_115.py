import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if capacity == 0: return float('inf') if total_water > 0 else 0
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

if __name__ == "__main__":
    assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9) == 2, "Test Case 1 Failed"
    assert max_fill([[0, 0], [0, 0]], 1) == 0, "Test Case 2 Failed"
    assert max_fill([[1]], 1) == 1, "Test Case 3 Failed"
    assert max_fill([[1, 2, 3], [4, 5, 6]], 10) == 2, "Test Case 4 Failed"
    assert max_fill([[100]], 9) == 12, "Test Case 5 Failed"
    print("All test cases passed!")