import math


def find_zero():
    x = float(input("Enter the coefficients of the polynomial: "))
    y = float(input("Enter another coefficient of the polynomial: "))
    z = float(input("Enter one more coefficient of the polynomial: "))

    a = 1
    b = -x
    c = y
    d = z

    n = len([a, b, c, d])
    if n % 2 != 0:
        raise ValueError("The number of coefficients must be even")

    m = n // 2
    a = [a, b, c, d][m]
    b = -sum([coeff for i, coeff in enumerate([a, b, c, d][:m]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate([a, b, c, d][:m]) if i % 2 == 0])
    d = -a

    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


print(find_zero())