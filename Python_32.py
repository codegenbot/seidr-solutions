def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    n = len(xs) - 1
    if n % 2 != 0:
        n -= 1
    for i in range(1, n, 2):
        if xs[i] != 0:
            return -xs[i - 1] / xs[i]
    return None