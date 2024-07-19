def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")
    if max(xs, key=abs) == 0:
        raise ValueError("List xs must have largest non-zero coefficient")

    n = len(xs) // 2
    a = xs[0]
    b = xs[1]
    c = xs[2]

    if a != 1:
        b /= a
        c /= a

    D = b**2 - 4 * c
    x1 = (-b + math.sqrt(D)) / 2
    x2 = (-b - math.sqrt(D)) / 2

    if x1 == x2:
        return round(x1, 2)
    else:
        if round(poly(xs, x1), 2) == 0:
            return round(x1, 2)
        else:
            return round(x2, 2)