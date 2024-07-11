def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(x for i, x in enumerate(xs[:-1]) if i % 2 == 0)
    c = sum(x for i, x in enumerate(xs[:-1]) if i % 2 != 0)
    r1, r2 = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a), (
        -b - math.sqrt(b**2 - 4 * a * c)
    ) / (2 * a)
    return min(r1, r2)