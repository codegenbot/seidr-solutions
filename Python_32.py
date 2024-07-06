Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    coefficient = max(i for i in xs if i != 0)
    return -coefficient / xs[1]