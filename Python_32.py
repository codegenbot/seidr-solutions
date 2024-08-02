def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        return None
    a = 1.0
    b = -sum(x for x in xs)
    c = sum(x for x in xs[:2])
    d = -sum(x for x in xs[:3])
    e = sum(x for x in xs[:4])
    r1 = (-b + math.sqrt((b**2) - 4 * a * c)) / (2 * a)
    r2 = (-b - math.sqrt((b**2) - 4 * a * c)) / (2 * a)
    return (
        round(r1, 2)
        if abs(xs[0] + xs[1] * r1) < abs(xs[0] + xs[1] * r2)
        else round(r2, 2)
    )