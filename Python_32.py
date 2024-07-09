def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[0]
    b = 0
    c = 0
    for i in range(n // 2, -1, -1):
        d = 1
        for j in range(i + 1, n // 2 + 1):
            d *= i - (j - 1)
        c += xs[i] * d
    return -b / (2 * c)