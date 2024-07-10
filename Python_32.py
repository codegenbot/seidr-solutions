def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    delta = b**2 - 3 * a * c
    x1 = (-b + math.sqrt(delta)) / (3 * a)
    x2 = (-b - math.sqrt(delta)) / (3 * a)
    if poly(xs, x1) == 0:
        return round(x1, 2)
    else:
        return round(x2, 2)