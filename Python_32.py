def find_zero(xs: list):
    n = len(xs)
    if n != 2:
        return None
    a, b = xs
    if b == 0:
        return None
    return -a / b