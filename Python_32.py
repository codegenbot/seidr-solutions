Here is the solution:

def find_zero(xs: list):
    return round(-xs[1] / xs[0], 2) if len(xs) > 1 else None