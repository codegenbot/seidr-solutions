def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    if xs[0] == 0:
        return 0
    for i in range(n, 0, -2):
        if xs[i] != 0:
            return -xs[i - 1] / xs[i]
    return None