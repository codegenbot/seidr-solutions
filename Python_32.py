def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    if a == 0:
        return 0
    p = (c / a - (b**2) / (3 * (a**2))) / 3
    q = ((2 * (b**3)) / (27 * (a**3)) - (b * c) / (3 * (a**2)) + d / a) / 2
    D = (q**2) + (p**3)
    if D > 0:
        u = (
            (-q + math.sqrt(D)) ** (1 / 3)
            if -q + math.sqrt(D) >= 0
            else -((-q + math.sqrt(D)) ** (1 / 3))
        )
        v = (
            (-q - math.sqrt(D)) ** (1 / 3)
            if -q - math.sqrt(D) >= 0
            else -((-q - math.sqrt(D)) ** (1 / 3))
        )
        return round(u + v - b / (3 * a), 2)
    elif D == 0:
        if -q >= 0:
            u = -((-q) ** (1 / 3))
            return round(2 * u - b / (3 * a), 2)
        else:
            u = (-q) ** (1 / 3)
            return round(-2 * u - b / (3 * a), 2)
    else:
        t = math.acos(-q / math.sqrt(-(p**3)))
        x1 = 2 * math.sqrt(-p) * math.cos(t / 3) - b / (3 * a)
        x2 = 2 * math.sqrt(-p) * math.cos((t + 2 * math.pi) / 3) - b / (3 * a)
        x3 = 2 * math.sqrt(-p) * math.cos((t + 4 * math.pi) / 3) - b / (3 * a)
        return round(x1, 2)