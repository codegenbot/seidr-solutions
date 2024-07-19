def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n, -1, -1):
        if xs[i] != 0:
            break
    return -xs[-1] / xs[-2]