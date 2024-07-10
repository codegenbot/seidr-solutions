def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    if xs[n] == 0:
        raise ValueError("Largest non-zero coefficient should not be zero")
    return -xs[0] / xs[1]