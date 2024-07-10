Here is the solution:

def find_zero(xs: list):
    a = xs[0]
    b = xs[1] if len(xs) > 1 else None
    return -b / (2 * a) if a and b else None