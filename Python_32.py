Here is the modified code:

# Task description: solve for x in quadratic equation ax^2 + bx + c = 0
import math

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 0])
    d = math.sqrt(b**2 - 4 * a * c)
    return (-b + d) / (2 * a)