def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    if n == 0:
        return 0
    x = -xs[-2] / xs[-1]
    return x