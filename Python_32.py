Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 4 == 3 and coeff != 0])
    d = -sum([coeff for i, coeff in enumerate(xs) if i % 8 == 7 and coeff != 0])
    e = xs[0]
    return round(-b / (2 * a), 2)