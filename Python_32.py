Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[1]
    b = -xs[0]
    c = xs[0] * xs[1] - xs[2]
    d = -c + math.sqrt(c**2 + (b/3)**3)
    return round(-d/(a*3), 2)