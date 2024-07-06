Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_index = xs.index(max(i for i in xs if i != 0))
    return -xs[max_index] / xs[max_index + 1]