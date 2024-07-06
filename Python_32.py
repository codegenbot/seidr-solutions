def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[1]
    b = -xs[0] / (2 * a)
    return round(-a / (2 * a), 2)