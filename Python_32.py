Here is the completed code:

```
import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs should have an even number of coefficients")
    root_x = -1 * (xs[n//2] / xs[0])
    return round(root_x, 2)