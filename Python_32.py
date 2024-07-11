def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if xs[0] == 0:
        raise ValueError("xs must start with non-zero coefficient")
    return -sum(x for x in xs[1:]) / xs[0]