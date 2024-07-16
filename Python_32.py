def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n):
        if xs[i] != 0 and xs[i + 1] != 0:
            break
    a, b = xs[i], xs[i + 1]
    x = -b / a
    return x