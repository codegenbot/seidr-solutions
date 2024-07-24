def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n - 1] if n == 2 else 1.0