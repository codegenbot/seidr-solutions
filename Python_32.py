def find_zero(xs: list):
    if not xs:
        return None
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b