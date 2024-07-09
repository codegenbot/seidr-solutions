def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[n]
    b = xs[n - 1]
    return -b / a