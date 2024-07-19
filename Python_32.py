def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 2:
        return -b / a
    if n == 4:
        delta = b * b - 4 * a * xs[2]
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        return x1 if x1 > x2 else x2