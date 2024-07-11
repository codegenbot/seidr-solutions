```
import math


def find_zero(xs):
    if len(xs) < 4:
        return "Not enough coefficients"
    try:
        for i in xs:
            float(i)
    except ValueError:
        return "Invalid input. Please enter only numbers separated by spaces."
    a, b, c = xs[0], xs[1], xs[2]
    d = sum(xs[3:]) if len(xs) > 3 else 0
    discriminant = b**2 - 4 * a * c
    if discriminant < 0:
        return "No real solutions"
    x = (-b + math.sqrt(discriminant)) / (2 * a)
    return round(x, 2)


xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
if len(xs) == 0 or all(i == '' for i in xs):
    return "Please enter some coefficients"
print(find_zero(xs))