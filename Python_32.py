def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    n = len(xs)
    x = -1 * xs[1] / (2 * xs[0])
    return round(x, 10)