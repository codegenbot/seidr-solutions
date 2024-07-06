Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = -sum(c for c in xs[1:] if c) / xs[0]
    return round(x, 2)