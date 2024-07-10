def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even.")

    a = xs[-1]
    b = sum([(-1) ** i * coeff for i, coeff in enumerate(xs[:-1])])
    return -b / a