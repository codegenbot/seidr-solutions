def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else None
    d = xs[3] if len(xs) > 3 else None

    if c is None and d is None:
        return -b / a
    elif d is None:
        return -(-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    else:
        roots = [(-b + math.sqrt(b**2 - 4*a*d)) / (2*a),
                 (-b - math.sqrt(b**2 - 4*a*d)) / (2*a)]
        return min(roots, key=lambda x: abs(x))