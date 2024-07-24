Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    x1 = -xs[1] / xs[0]
    return round(x1, 2)