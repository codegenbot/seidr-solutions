def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    n = len(xs) - 1
    b = xs[-1] / xs[-2]
    a = xs[-3] / xs[-2]
    return -b / (2 * a)