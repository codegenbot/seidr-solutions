Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else None
    d = xs[3] if n > 3 else None

    if c is None:
        return -b / a
    elif d is None:
        t1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
        t2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2 * a)
        return min(t1, t2) if c > 0 else max(t1, t2)