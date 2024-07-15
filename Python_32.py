def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    discriminant = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)
    if abs(poly(xs, x1)) < abs(poly(xs, x2)):
        return x1
    else:
        return x2