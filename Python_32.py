def find_zero(xs: list):
    n = len(xs) // 2
    if len(xs) % 2 == 0:
        zero_point = -sum([xs[n - 1], xs[n]]) / xs[-1]
    else:
        zero_point = -xs[n] / xs[-1]
    return zero_point