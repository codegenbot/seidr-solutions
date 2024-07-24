Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1]) if i % 2 == 0])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 4 == 3 and coeff != 0])
    d = -sum([coeff for i, coeff in enumerate(xs) if i % 4 == 1 and coeff != 0])
    return round(-b / (2 * a), 2)