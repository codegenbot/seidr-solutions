def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[0], max(xs[1:])
    return -a / b