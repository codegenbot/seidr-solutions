def find_zero(xs: list):
    a, b = xs[-1], xs[-2]
    return 0 if a == 0 else -b / a