def find_zero(xs: list) -> float:
    n = xs[0]
    a = xs[n]
    b = xs[n-1]
    return -b / a