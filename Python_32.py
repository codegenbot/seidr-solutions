"


def find_zero(xs: list):
    n = len(xs) // 2
    if n == 0:
        return xs[0]
    return -xs[n-1] / xs[n]"