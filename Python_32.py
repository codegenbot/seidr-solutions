def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Odd number of coefficients provided.")

    if n == 0:
        return 0.0

    if n == 2:
        return -xs[0] / xs[1]

    if n == 4:
        a, b, c, d = xs
        delta = b**2 - 4 * a * c
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        return x1 if abs(poly(xs, x1)) < abs(poly(xs, x2)) else x2