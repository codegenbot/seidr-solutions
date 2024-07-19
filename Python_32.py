def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even.")

    n = len(xs) - 1
    leading_coeff = max([abs(x) for x in xs[1:]])
    x = -xs[0] / leading_coeff
    return x