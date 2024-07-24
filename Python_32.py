Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(coeff for i, coeff in enumerate(xs[:-1]) if i % 2 == 1)
    return -b / (2 * a)