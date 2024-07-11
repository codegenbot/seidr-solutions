Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[n//2]
    b = -xs[1] / (2*a)
    c = xs[0] / a - b**2
    d = 4*a*c - b**2
    if d < 0:
        return None
    x1 = (-b + math.sqrt(d)) / (2 * a)
    return round(x1, 2)