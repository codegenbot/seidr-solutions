Here is the solution:

def find_zero(xs: list):
    return -xs[1] / xs[0] if len(xs) > 1 else None