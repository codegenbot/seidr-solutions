def find_zero(xs: list):
    assert len(xs) % 2 == 0, "xs must have even number of coefficients"
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    D = (b**2 - 4 * a * c) ** 0.5
    t1 = (-b + D) / (2 * a)
    t2 = (-b - D) / (2 * a)
    return t1, t2 if c != 0 else t1 if D == 0 else None