Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    if abs(b) < 1e-10 and len(xs) > 2:
        return -a / b
    return (-b + math.sqrt(b**2 - 4*a*xs[-1])) / (2 * a)