Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    d = (b**3 - a*c) / (3*a*b - c**2)
    return -b / (3*a*d - b)