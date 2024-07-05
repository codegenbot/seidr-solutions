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

    if all([x > 0 for x in [a, b, c]]):
        d = (b**2) - (4 * a * c)
        if d < 0:
            return None
        else:
            return (-b + math.sqrt(d)) / (2 * a)


xs = [int(x) for x in input("Enter the list of numbers: ").split()]
find_zero(xs)