def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 2:
        return -b / a
    c = xs[2]
    D = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(D)) / (2 * a)
    x2 = (-b - math.sqrt(D)) / (2 * a)
    return x1 if round(x1, 10) == round(x2, 10) else x1 if x1 < x2 else x2