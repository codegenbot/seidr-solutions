import math


def find_zero(xs):
    if len(xs) < 1:
        return None

    for x in xs:
        if not isinstance(x, (int, float)):
            return None

    if len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        return (-xs[-1] + math.sqrt((xs[1] ** 2) - (4 * xs[0] * xs[-1]))) / (2 * xs[0])


xs = input("Enter a list of numbers: ").split()
try:
    xs = [float(x) for x in xs]
except ValueError:
    print("Error: All elements should be numbers.")
    return None

find_zero(xs)