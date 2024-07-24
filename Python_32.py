def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return 0