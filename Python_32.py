def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    d = (-1 + (1 - 4 * xs[0] * xs[n-1]) ** 0.5) / (2 * xs[1])
    return round(d, 2)