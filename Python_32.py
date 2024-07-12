def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 1 else 0
    d = xs[3] if n > 2 else 0
    discriminant = b**2 - 3 * a * c
    x1 = (-b + math.sqrt(discriminant)) / (3 * a)
    x2 = (-b - math.sqrt(discriminant)) / (3 * a)
    return x1 if x1 == 0 or x2 == 0 else x2