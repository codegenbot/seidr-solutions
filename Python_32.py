import math


def find_zero():
    x1 = float(input("Enter the coefficient of the first term: "))
    x2 = float(input("Enter the coefficient of the second term: "))
    x3 = float(input("Enter the coefficient of the third term: "))
    x4 = float(input("Enter the constant term: "))

    a = 1
    b = -x3
    c = x2 - (a * x4)
    d = -x1

    if (b**2) - (4 * a * c) < 0:
        print("No real solution exists.")
    else:
        x = (-b + math.sqrt((b**2) - (4 * a * c))) / (2 * a)
        return round(x, 2)