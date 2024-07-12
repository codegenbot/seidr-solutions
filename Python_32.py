Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    if abs(xs[0]) < abs(xs[-1]):
        raise ValueError("xs must start with the largest non-zero coefficient")
    
    return -xs[-1] / xs[-2]