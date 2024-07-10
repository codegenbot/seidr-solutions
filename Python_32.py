def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[-1], xs[-2]
    p = -a / b
    return p