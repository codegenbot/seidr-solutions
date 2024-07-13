Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    x = -xs[1] / xs[3]
    return round(x, 2)