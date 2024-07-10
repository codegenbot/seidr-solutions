Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(d, 2)