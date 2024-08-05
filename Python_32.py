def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even.")
    a = xs[-1]
    b = xs[-2]
    return -a / b