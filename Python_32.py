def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n, -1, -1):
        if xs[i] != 0:
            return -xs[0] / xs[i]