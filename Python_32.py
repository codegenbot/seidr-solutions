def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[-1]
    return -b / a


# Example usage
# print(round(find_zero([1, 2]), 2))  # Output: -0.5
# print(round(find_zero([-6, 11, -6, 1]), 2))  # Output: 1.0