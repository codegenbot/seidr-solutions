def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 == 1:
        n -= 1
    for i in range(0, n, 2):
        a, b = xs[i], xs[i + 1]
        if a * b < 0:
            return -a / b
    return None