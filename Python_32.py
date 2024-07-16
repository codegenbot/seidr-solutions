def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = sum([xs[i] * (n - i) for i in range(n)])
    return -a / b