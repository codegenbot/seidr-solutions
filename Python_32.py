def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = sum([(-1) ** i * coeff for i, coeff in enumerate(xs[:-1])])
    return -b / a