def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    if max(xs) <= 0:
        raise ValueError("largest non zero coefficient should be positive")

    p = poly(xs, -1.0 / xs[-1]
    return round(-p / (2 * xs[-1]), 2)