def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    if xs[n] == 0:
        return None
    return -xs[0] / xs[n]