Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else None
    d = xs[3] if len(xs) > 3 else None

    if c is not None and d is not None:
        x = (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
    elif c is not None:
        x = -b / (2 * a)
    else:
        x = -a / b
    return round(x, 2)