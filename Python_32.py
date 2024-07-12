Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    x = -xs[1] / xs[3]
    return round(x, 2)