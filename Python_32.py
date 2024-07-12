def find_zero(xs: list):
    n = len(xs)
    a, b = xs[-2], xs[-1]
    return -b/a

# Test cases
# round(find_zero([1, 2]), 2) # Expected output: -0.5
# round(find_zero([-6, 11, -6, 1]), 2) # Expected output: 1.0