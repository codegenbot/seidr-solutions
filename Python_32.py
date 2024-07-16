def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    for i in range(n + 1):
        xs[i] /= xs[n]
    xs.pop()
    return -1 / sum(xs)