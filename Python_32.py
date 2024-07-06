Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List of coefficients must have even number of elements")
    n = len(xs) // 2
    return -xs[n-1] / xs[-1]