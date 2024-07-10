def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    if n == 2:
        return -b / a
    else:
        return 1.0