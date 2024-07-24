Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have an even number of coefficients")
    a0 = xs[0]
    an = xs[-1]
    x = -a0 / an
    return round(x, 10)