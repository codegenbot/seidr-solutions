```
import math


def find_zero(xs):
    if len(xs) < 3:
        return "Not enough coefficients"
    try:
        a, b, c = xs[0], xs[1], xs[2]
        d = sum(xs[3:]) if len(xs) > 3 else 0
    except ValueError:
        return "Invalid input. Please enter only numbers separated by spaces."
    discriminant = b**2 - 4 * a * c
    if discriminant < 0:
        return "No real solutions"
    x = (-b + math.sqrt(discriminant)) / (2 * a)
    return round(x, 2)


xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
print(find_zero(xs))