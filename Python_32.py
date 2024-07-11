import math


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    if len(xs) < 4:
        c = d = 0
    else:
        c = xs[2]
        d = xs[3]
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
print(find_zero(xs))