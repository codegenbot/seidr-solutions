def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    if n % 2 == 0 and b != 0:
        return -a / b
    return None