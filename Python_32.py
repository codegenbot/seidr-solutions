```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = -xs[1]
    c = xs[2] if n > 2 else 0
    d = -(a*c + b**2) / (2 * c)
    return round(-b / (2 * c), 2) if c != 0 else 0