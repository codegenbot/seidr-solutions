def find_zero(xs: list):
    n = len(xs) - 1
    x = -xs[-2] / xs[-1]
    return x