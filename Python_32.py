Here is the solution to the problem:

def find_zero(xs: list):
    n = len(xs) // 2
    if xs[-1] != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -xs[n-1] / xs[-1]
    return round(x, 2)