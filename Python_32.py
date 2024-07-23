def find_zero(xs: list):
    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")

    a = xs[0]
    b = xs[1]
    c = sum(xs[2:]) / (len(xs) - 2)

    discriminant = b**2 - 4 * a * c
    if discriminant < 0:
        return round((-b + (discriminant ** 0.5)) / (2 * a), 10)
    elif discriminant == 0:
        return round(-b / (2 * a), 10)
    else:
        x1 = (-b + ((b**2 - 4 * a * c) ** 0.5)) / (2 * a)
        x2 = (-b - ((b**2 - 4 * a * c) ** 0.5)) / (2 * a)
        return round(x1, 10), round(x2, 10)