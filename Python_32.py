def find_zero(xs: list):
    n = len(xs) // 2
    zero_point = -xs[n - 1] / xs[-1]
    return zero_point