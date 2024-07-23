def find_zero(xs: list):
    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")

    a = xs[0]
    b = xs[1]
    c = sum(xs[2:]) / (len(xs) - 2)

    d = b**2 - 4*a*c

    if d >= 0: 
        x = (-b + math.sqrt(d)) / (2 * a)
        return round(x, 10)
    else:
        x = (-b - math.sqrt(-d)) / (2 * a)
        return round(x, 10), xs