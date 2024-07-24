import math
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum(x for i, x in enumerate(xs[:-1]) for j in range(i+1))
    c = sum(x for i, x in enumerate(xs) for j in range(i+2))

    if a == 0:
        raise ValueError("xs must have the largest non zero coefficient")

    return (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)