def find_zero(xs: list):
    n = len(xs) - 1
    a1, a0 = xs[-2], xs[-1]
    return -a0 / a1