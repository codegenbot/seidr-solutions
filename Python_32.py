def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]

    p = (3 * a * c - b**2) / (3 * a**2)
    q = (2 * b**3 - 9 * a * b * c + 27 * a**2 * d) / (27 * a**3)

    discriminant = (q / 2) ** 2 + (p / 3) ** 3

    if discriminant > 0:
        A = -q / 2 + math.sqrt(discriminant)
        B = -q / 2 - math.sqrt(discriminant)
        if A >= 0:
            s = A ** (1 / 3)
        else:
            s = -((-A) ** (1 / 3))
        if B >= 0:
            t = B ** (1 / 3)
        else:
            t = -((-B) ** (1 / 3))
        x = s + t - b / (3 * a)
    elif discriminant == 0:
        if q >= 0:
            x = 2 * math.sqrt(-p / 3) - b / (3 * a)
        else:
            x = -2 * math.sqrt(-p / 3) - b / (3 * a)
    else:
        phi = math.acos(-q / 2 * math.sqrt(-27 / p**3)) / 3
        x1 = 2 * math.sqrt(-p / 3) * math.cos(phi) - b / (3 * a)
        x2 = 2 * math.sqrt(-p / 3) * math.cos(phi + 2 * math.pi / 3) - b / (3 * a)
        x3 = 2 * math.sqrt(-p / 3) * math.cos(phi + 4 * math.pi / 3) - b / (3 * a)
        x = x1

    return x