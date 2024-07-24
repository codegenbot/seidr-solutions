def find_zero(xs: list):
    n = len(xs)
    mid = n // 2
    if n % 2 == 0:
        return -((xs[mid - 1] + xs[mid]) / 2) / xs[-1]
    else:
        return -xs[mid] / xs[-1]