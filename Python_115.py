def max_fill(grid, capacity):
    left = [c for r in grid for c in r]
    right = left[::-1]
    total_amount = sum(min(capacity, c) for c in left + right)
    return min(total_amount, capacity)