def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[n]
    d = xs[n - 1]
    return -c / d