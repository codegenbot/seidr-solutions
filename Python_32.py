Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a0 = xs[-1]
    a = -xs[1] / (2 * a0)
    return round(a, 2)