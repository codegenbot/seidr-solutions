def find_zero(xs: list):
    n = len(xs) - 1
    x = -xs[0] / xs[n - 1]
    return x