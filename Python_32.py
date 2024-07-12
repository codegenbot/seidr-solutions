def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")

    n = len(xs) // 2
    leading_coeff = xs[n]
    zero = -xs[1] / (leading_coeff * 2)
    return round(zero, 2)