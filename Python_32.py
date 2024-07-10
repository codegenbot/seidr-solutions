Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    t1 = (b**2 - 4*a*c) ** 0.5 if a != 0 and c != 0 else None
    t2 = (d - b**2/3/a + 2*b/(3*a)) if a != 0 and d != 0 else None
    if t1 is not None:
        x1 = (-b+t1)/(2*a)
        x2 = (-b-t1)/(2*a)
        return min(x1, x2) if c > 0 else max(x1, x2)
    elif t2 is not None and d != 0:
        return -t2/(3*d)
    elif a == 0:
        return float('inf')
    else:
        raise ValueError("xs must have the largest non-zero coefficient as its first element")