Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum((x for x in xs[:-1]))
    c = sum((x * y for x, y in zip(xs[:-2], range(2, n))))
    d = -sum((x * y for x, y in zip(xs[:-3], range(3, n+1))))
    return round(-b / (2 * a), 2) if abs(a) > 10e-9 else round(c / b, 2)