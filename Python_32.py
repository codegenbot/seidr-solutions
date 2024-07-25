def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[-1] != 0
    a = xs[0]
    b = xs[1]
    c = xs[-1]
    d = b * b - 4 * a * c
    x1 = (-b + math.sqrt(d)) / (2 * a)
    x2 = (-b - math.sqrt(d)) / (2 * a)
    return x1 if abs(x1) < abs(x2) else x2