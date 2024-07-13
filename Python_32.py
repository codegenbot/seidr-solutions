Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    c = sum(x * (i-1) for i, x in enumerate(xs[:-1], start=1))
    d = -sum((x * (i-1)**2) for i, x in enumerate(xs[:-1], start=1))
    root = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(root, 2)