def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    assert xs[n] != 0
    a = xs[n]
    b = xs[n - 1]
    c = xs[n - 2]
    D = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(D)) / (2 * a)
    x2 = (-b - math.sqrt(D)) / (2 * a)
    return x1 if abs(x1) < abs(x2) else x2