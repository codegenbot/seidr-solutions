def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    zero = xs[1] * (n - 1) / (xs[n - 1] - xs[1])
    return zero