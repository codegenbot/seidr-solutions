Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = xs[-3] - xs[-1] * xs[0]
    c = xs[-4] - 2*xs[-3]*xs[0] + xs[-1]*pow(xs[0], 2)
    root = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(root, 2)