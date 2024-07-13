def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    if xs[n] == 0:
        raise ValueError("Largest non zero coefficient should not be zero")

    a = xs[0]
    b = xs[1]
    c = xs[2]

    discriminant = b**2 - 4 * a * c
    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)

    if x1 == x2:
        return round(x1, 2)

    if poly(xs, x1) == 0:
        return round(x1, 2)
    else:
        return round(x2, 2)