def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[n - 1], xs[n]
    return -b / a