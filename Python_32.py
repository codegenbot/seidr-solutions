def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(xs)
    if n == 2:
        return -a / b
    else:
        return a / b