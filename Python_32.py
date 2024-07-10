def find_roots(a: float, b: float, c: float):
    d = b**2 - 4 * a * c
    if d < 0:
        return "No real roots"
    elif d == 0:
        root = (-b + math.sqrt(d)) / (2 * a)
        return [root]
    else:
        r1 = (-b + math.sqrt(d)) / (2 * a)
        r2 = (-b - math.sqrt(d)) / (2 * a)
        return sorted([r1, r2])