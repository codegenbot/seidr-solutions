Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    n = (len(xs) - 1) // 2
    x = (-xs[n-1] / xs[-1]) ** (1.0/(n))
    return round(x, 2)