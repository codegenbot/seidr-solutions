def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]

    if a == 0:
        return 0.0

    discriminant = b**2 - 3 * a * c
    if discriminant < 0:
        return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    else:
        return (-b + math.sqrt(discriminant)) / (3 * a)