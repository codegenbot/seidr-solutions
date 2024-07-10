import math
def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    degree = n
    while xs[degree] == 0:
        degree -= 1

    if degree % 2 != 0:
        raise ValueError("Largest non-zero coefficient must have even degree")

    a = xs[0]
    b = xs[1]
    c = xs[2]

    discriminant = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)

    if x1 == x2:
        return round(x1, 2)
    else:
        return round(x1 if x1 < x2 else x2, 2)