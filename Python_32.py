```
import math


def find_zero(xs):
    if len(xs) < 1:
        print("Error: List should have at least one element.")
        return None

    for x in xs:
        if not isinstance(x, (int, float)):
            print("Error: All elements in the list should be numbers.")
            return None

    if len(xs) == 2:
        a, b = xs
        return -b / a
    elif len(xs) == 3:
        a, b, c = xs
        return (-b + math.sqrt((b ** 2) - (4 * a * c))) / (2 * a)
    else:
        return None