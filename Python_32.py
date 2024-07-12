Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    a = xs[n//2]
    return -a / xs[0]