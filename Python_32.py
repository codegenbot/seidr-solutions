import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    closest = float('inf')
    for x in xs:
        if abs(x) < abs(closest):
            closest = x
    return closest if closest != float('inf') else None