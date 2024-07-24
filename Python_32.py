def find_zero(xs: list):
    a = xs[0]
    b = xs[1] if len(xs) > 1 else 0
    c = sum([coeff * math.factorial(i) for i, coeff in enumerate(xs) if i >= 2])

    x = -b / (2 * a)

    return round(x, 2)