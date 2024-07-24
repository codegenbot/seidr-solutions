def find_zero(xs: list):
    n = len(xs) // 2
    if len(xs) % 2 == 0:
        zero = -((xs[n] + xs[n - 1]) / 2) / xs[-1]
    else:
        zero = -xs[n] / xs[-1]
    return zero