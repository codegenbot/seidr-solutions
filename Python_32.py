def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("The number of coefficients must be even.")

    n = len(xs) - 1
    a = xs[0]
    b = xs[n]

    return -b / a