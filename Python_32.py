def find_zero(xs: list):
    n = len(xs) - 2
    for i in range(0, n, 2):
        if xs[i] * xs[i + 2] < 0:
            return -xs[i + 1] / xs[i]
    return None