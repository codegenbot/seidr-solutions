def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    x = -a / b
    return x