def find_zero(xs: list):
    n = len(xs) // 2
    zero_point = -xs[n] if len(xs) % 2 else (-xs[n - 1] + -xs[n]) / 2
    return zero_point