def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n):
        if xs[i] != 0:
            break
    return -xs[n] / xs[i]