def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    d = xs[3] if len(xs) > 3 else 0
    x = -b / (2 * a)
    return round(x, 2) if abs(c + d * x) < 1e-6 else None