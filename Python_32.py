Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    p = (b**2 - 4*a*c) ** 0.5
    q = (-b + p) / (2 * a)
    r = (-b - p) / (2 * a)
    return min(q, r) if c != 0 else max(q, r)