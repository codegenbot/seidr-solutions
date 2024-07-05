```
import math


def find_zero(xs):
    if len(xs) < 3:
        print("Error: List should have at least three elements.")
        return None

    for x in xs:
        if not isinstance(x, (int, float)):
            print("Error: All elements in the list should be numbers.")
            return None

    a = xs[0]
    b = xs[1]
    c = xs[-1]

    d = b**2 - 4 * a * c
    if d < 0:
        return "The equation has no real roots."
    elif d == 0:
        root = (-b + math.sqrt(d)) / (2 * a)
        return root
    else:
        r1 = (-b + math.sqrt(d)) / (2 * a)
        r2 = (-b - math.sqrt(d)) / (2 * a)
        if r1 > r2:
            return r2, r1
        else:
            return r1, r2