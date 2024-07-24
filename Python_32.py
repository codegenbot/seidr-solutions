def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = -xs[1] / xs[3]
    return round(x, 2)