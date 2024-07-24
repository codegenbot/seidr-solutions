def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[0]
    b = xs[-1]
    return -b / a