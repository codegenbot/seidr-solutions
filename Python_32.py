def find_zero(xs: list):
    n = len(xs) // 2
    a = xs[-1] / xs[-2]
    b = xs[-3] / xs[-2]
    return -b / (a - b)