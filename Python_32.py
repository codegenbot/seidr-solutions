def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        return -xs[n // 2] / xs[-1]
    else:
        mid1 = xs[(n - 1) // 2]
        mid2 = xs[n // 2]
        return -(mid1 + mid2) / 2 / xs[-1]