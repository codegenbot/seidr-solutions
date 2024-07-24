def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[::2]
    b = xs[1::2]
    return -b[0] / (2 * max(a))