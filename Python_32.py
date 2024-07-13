Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 0])
    x = -b / (2 * a)
    return round(x, 2)