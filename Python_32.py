def find_zero(xs: list):
    n = len(xs)
    a = xs[n-1]
    b = xs[n-2]
    return -b / a