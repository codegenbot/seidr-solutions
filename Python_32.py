def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]

    if n == 1:
        return -b / a

    D = b**2 - 4 * a * xs[2]
    x1 = (-b + math.sqrt(D)) / (2 * a)
    x2 = (-b - math.sqrt(D)) / (2 * a)

    return x1 if abs(poly(xs, x1)) < abs(poly(xs, x2)) else x2