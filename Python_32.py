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

    if len(xs) == 3 and all([x > 0 for x in [a, b, c]]):
        return (-b + math.sqrt((b**2) - (4 * a * c))) / (2 * a)
    else:
        return None


xs = [int(x) for x in input("Enter the list of numbers: ").split()]
result = find_zero(xs)

if result is not None:
    print(f"The zero of the quadratic equation is {result}")
else:
    print("No valid input received.")