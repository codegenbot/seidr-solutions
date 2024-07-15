def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = sum([(-1)**i * sum([coeff * math.pow(1, i) for i, coeff in enumerate(xs)]) for xs in [[xs[i], xs[i + 1]] for i in range(0, n, 2)])
    return -b / a