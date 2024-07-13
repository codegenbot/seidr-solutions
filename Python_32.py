def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = sum([(-1) ** i * sum([xs[j] * math.comb(j, i) for j in range(1, n+1)]) for i in range(n+1)])
    return -b / a