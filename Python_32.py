```
while True:
    xs = input("Enter coefficients separated by spaces: ").split()
    if len(xs) >= 3 and all(x.replace('.', '', 1).replace('-', '', 1).isdigit() for x in xs):
        break
    print("Invalid input. Please enter exactly three or four coefficients, separated by spaces.")

import math

def find_zero(xs):
    try:
        a, b, c = xs[0], xs[1], xs[2]
        d = sum(map(float, xs[3:])) if len(xs) > 3 else 0
    except ValueError:
        return "Invalid input. Please enter only numbers separated by spaces."
    discriminant = b**2 - 4 * a * c
    if discriminant < 0:
        return "No real solutions"
    x1 = (-b + math.sqrt(discriminant)) / (2 * a)
    x2 = (-b - math.sqrt(discriminant)) / (2 * a)
    return f"The zeros are {round(x1, 2)} and {round(x2, 2)}"

print(find_zero(map(float, xs)))