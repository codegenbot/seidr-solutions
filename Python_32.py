Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = poly(xs[:-1], -b / (2 * a))
    return round(c, 2)