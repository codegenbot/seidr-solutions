def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    x = -a / b
    return x