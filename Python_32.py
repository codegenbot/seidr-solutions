Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")

    n = len(xs)
    x = -xs[1] / xs[n-1]
    return round(x, 2)