def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    max_coeff = max(xs, key=abs)
    x = -max_coeff
    return x