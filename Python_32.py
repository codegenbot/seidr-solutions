```Python
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
    c = [xs[i] for i in range(2, len(xs) - 1)]

    if all([x > 0 for x in [a, b] + c]):
        return (-sum(c) + math.sqrt((sum(c)**2) - (4 * a * c[-1]))) / (2 * a)
    else:
        zero = None
        for i in range(len(c)):
            if all([x > 0 for x in [a, b] + c[:i] + c[i+1:]]):
                zero = (-sum(c[:i] + c[i+1:]) + math.sqrt((sum(c[:i] + c[i+1:])**2) - (4 * a * c[i]))) / (2 * a)
                break
        return zero