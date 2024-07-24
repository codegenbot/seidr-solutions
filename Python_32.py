Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    x = -xs[1] / xs[0]
    return round(x, 2)