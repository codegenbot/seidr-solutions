def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0] / xs[n]
    b = xs[n - 1] / xs[n]
    return -b / (2 * a)