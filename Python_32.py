def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]


# Example usage
print(round(find_zero([1, 2]), 2))  # -0.5
print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0