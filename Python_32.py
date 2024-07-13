Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("The polynomial must have an even number of coefficients")
    a = xs[-1]
    b = -sum(c for c in xs[:-1])
    x = -b / (2 * a)
    return round(x, 2)