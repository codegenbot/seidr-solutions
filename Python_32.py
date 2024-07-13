def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None

    a = xs[0]
    b = xs[1]

    root = (-b + math.sqrt(b**2 - 4 * a * xs[-1])) / (2 * a)
    return round(root, 2)