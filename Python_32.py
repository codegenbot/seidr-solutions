```
import math
from math import round

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("The number of coefficients must be even.")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0

    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)