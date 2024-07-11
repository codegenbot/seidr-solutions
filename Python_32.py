while True:
    xs = input("Enter coefficients separated by spaces: ").split()
    if len(xs) >= 3 and all(
        x.replace(".", "", 1).replace("-", "", 1).isdigit() for x in xs
    ):
        break
    print(
        "Invalid input. Please enter exactly three or four coefficients, separated by spaces."
    )

import math


def find_zero(xs):
    if len(xs) == 3:
        a, b, c = map(float, xs)
        d = 0
    elif len(xs) == 4:
        a, b, c = map(float, xs[:3])
        d = float(xs[3])
    else:
        return "Invalid input. Please enter exactly three or four coefficients, separated by spaces."

    discriminant = b**2 - 4 * a * (c - d)
    if discriminant < 0:
        return "No real solutions"
    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)
    return f"The zeros are {round(x1, 2)} and {round(x2, 2)}"


print(find_zero(xs))