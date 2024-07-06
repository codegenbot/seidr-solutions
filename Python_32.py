def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x1, a = xs[0], xs[1]
    b = -(x1**2) / (4*a)
    return round(-a/(2*a), 2)