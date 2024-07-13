def find_zero(xs: list):
    n = len(xs) // 2
    p = [0] * (n + 1)
    p[n] = 1
    for i in range(n):
        for j in range(n - i):
            p[j] -= xs[2 * i] * p[j + 1]
    return p[0] / p[1]