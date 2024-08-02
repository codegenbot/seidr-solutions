def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 1:
        return -a / b
    return -a / b