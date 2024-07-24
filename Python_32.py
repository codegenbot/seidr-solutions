```
import math
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = sum(x for x in xs[:-1])
    c = sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)))
    d = sum(x*y**2 for x, y in zip(xs[:-1], range(len(xs)-1)))
    
    if a == 0:
        return "a cannot be zero"
    discriminant = b**2 - 4*a*(c - d/float(a))
    if discriminant < 0:
        return "No real solution exists"
    root = (-b + math.sqrt(discriminant)) / (2*a)
    return round(root, 2)