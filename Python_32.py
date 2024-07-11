Here is the solution:

def find_zero(xs: list):
    a = xs[0]
    b = 0 if len(xs) < 2 else xs[1]
    return -b / (2*a) if a != 0 else None