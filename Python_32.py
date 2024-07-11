def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = abs(max(xs))
    return -sum(x for x in xs[1::2]) / (2 * sum(x for x in xs[0::2]))