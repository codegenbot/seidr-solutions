def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("The number of coefficients in xs must be even")
    a = xs[1]
    b = -xs[0] / (2 * a)
    return round(-a / (2 * a), 2)