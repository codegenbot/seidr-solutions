def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    for i in range(n // 2):
        if xs[2 * i] == 0 or xs[2 * i + 1] == 0:
            return -xs[2 * i] / xs[2 * i + 1]