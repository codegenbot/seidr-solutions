```
import math

def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[-1]
    D = b**2 - 4*a*c
    if D < 0:
        return "The function has no real solutions."
    elif D == 0:
        x = -b / (2 * a)
        return x
    else:
        x1 = (-b + math.sqrt(D)) / (2 * a)
        x2 = (-b - math.sqrt(D)) / (2 * a)
        if x1 > x2:
            return f"Two solutions: {x2} and {x1}"
        elif x2 > x1:
            return f"Two solutions: {x1} and {x2}"
        else:
            return "One solution."