Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 != 0])
    return round(-b / (2 * a), 10)