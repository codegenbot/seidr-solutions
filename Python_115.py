Here is the completed code:

def max_fill(grid, capacity):
    max_filled = 0
    for row in grid:
        filled = sum(row)
        while filled > 0:
            bucket_space = min(filled, capacity)
            filled -= bucket_space
            max_filled += 1
    return math.ceil(max_filled / (capacity * len(grid)))