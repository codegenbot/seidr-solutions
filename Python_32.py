def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")
    if xs[-2] == 0:
        return 0
    return -xs[-1] / xs[-2]