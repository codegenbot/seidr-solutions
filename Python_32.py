def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    a = xs[0]
    b = xs[n]
    return -a / b