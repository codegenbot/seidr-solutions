def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    d = xs[3] if len(xs) > 3 else 0
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)