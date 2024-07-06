```
import math

def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    result = xs[0]
    for x in xs[1:]:
        result = result * (n - len(xs)) + x
    return round(result, 2)