Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    for i in range(len(xs)-2,-1,-1):
        a = (a - xs[i])/(i+1)
    return round(-a,2)