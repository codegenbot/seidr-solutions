def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(xs[1:])
    x = -b / a
    return x