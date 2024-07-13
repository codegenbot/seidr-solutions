Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[0]
    b = -xs[1]
    c = xs[2] if n > 2 else 0
    d = -(a + b) / (3*c) if c != 0 and len(xs) >= 4 else 0
    return round(-b / (2 * c), 2)