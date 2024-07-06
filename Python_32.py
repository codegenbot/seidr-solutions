Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List of coefficients must have an even number of elements")
    a, b = xs[0], xs[-1]
    return -b / a