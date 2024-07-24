Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1])], 0)
    c = sum([coeff * math.pow(i, 2) for i, coeff in enumerate(xs[:-2])], 0)
    d = -sum([coeff * math.pow(i, 3) for i, coeff in enumerate(xs[:-3])], 0)
    e = a
    return round(-b / (2 * c), 2)