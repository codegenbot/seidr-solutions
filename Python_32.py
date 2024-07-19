def find_zero(xs: list):
    n = len(xs) - 1
    res = -xs[n - 1] / xs[n]
    return res