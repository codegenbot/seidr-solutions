def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Input list must have an even number of coefficients")
    b = -xs[-2] / xs[-1]
    a = xs[-2] - b * xs[-1]
    return b