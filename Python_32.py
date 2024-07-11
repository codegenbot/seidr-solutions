import math


def find_zero():
    x = float(input("Enter the coefficients of polynomial (space separated): "))
    xs = list(map(float, x.split()))
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[n // 2]
    b = -sum([coeff for i, coeff in enumerate(xs[: n // 2]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs[: n // 2]) if i % 2 == 0])
    d = -a
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


print(find_zero())