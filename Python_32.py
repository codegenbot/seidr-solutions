Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    
    a = xs[1]
    b = -xs[0]
    
    return round(-b / (2*a), 2)