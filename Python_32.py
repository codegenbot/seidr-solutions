def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(xs) == 0:
        raise ValueError("xs must have largest non zero coefficient")

    n = (len(xs) - 1) // 2
    x = (-1) ** (n + 1) * max(xs) / xs[n]
    return round(x, 10)