```
import math
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = (b**3 - 4 * a * c) / (8 * a)
    return round(-b / (2 * a) + math.sqrt(d), 2)