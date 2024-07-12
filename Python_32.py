def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    x_coefficient = -xs[1] / xs[0]
    return round(x_coefficient, 2)