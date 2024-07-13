def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    if xs[-1] == 0:
        raise ValueError("Largest non-zero coefficient should not be 0")
    return -xs[0] / xs[1]