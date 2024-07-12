def find_zero(xs: list):
    n = len(xs) // 2
    a = xs[0]
    b = xs[1]
    c = xs[2]
    delta = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    if a != 0:
        if delta > 0:
            return x1 if x1 != 0 else x2
        elif delta == 0:
            return x1
        else:
            return None
    else:
        return -c / b