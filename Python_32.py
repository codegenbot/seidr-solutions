def find_zero(xs: list):
    n = len(xs) - 1
    a = 1
    b = -1 * xs[0]
    for i in range(1, n + 1):
        a = a * i
        b = b * i + xs[i]
    return -b / a