Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    x0 = -sum(c for c in xs[1:]) / xs[0]
    return round(x0, 2)