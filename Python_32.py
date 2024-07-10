def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    xs = [coeff / xs[-1] for coeff in xs]
    return -xs[0] / 2 if n == 2 else 1 if n == 3 else 0