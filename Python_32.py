Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1])])
    c = sum([coeff for i, coeff in enumerate(xs[:-2], 1)])
    d = -xs[0]
    return round(-b / (2 * a), 2) if a != 0 else float('inf')