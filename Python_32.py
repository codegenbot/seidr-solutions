def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]  # Largest non-zero coefficient
    b = sum([(-1) ** i * xs[i] for i in range(1, n + 1, 2)])
    return -b / a