def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[0]
    b = xs[n]
    x = -a / b
    return x