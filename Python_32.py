def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    if xs[n] == 0:
        raise ValueError("Largest non-zero coefficient should not be zero")
    if n == 2:
        return -xs[0] / xs[1]
    return next(x for x in range(-1000, 1000) if sum(c * x ** i for i, c in enumerate(xs)) == 0)