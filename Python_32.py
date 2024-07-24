Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    n = len(xs)
    a = xs[n//2]
    return -a / xs[0]