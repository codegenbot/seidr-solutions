def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    return round(-b / (2 * a), 2)