import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed

if __name__ == "__main__":
    result = max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9)
    print(result)  # Should output 2
    assert result == 2, "Error"