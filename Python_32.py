import math


def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient 'a': "))
            b = float(input("Enter coefficient 'b': "))
            c = float(input("Enter coefficient 'c': "))
            break
        except ValueError:
            print("Invalid input. Please enter numeric values.")

    discriminant = b**2 - 4 * a * c
    if discriminant >= 0:
        x = (b + math.sqrt(discriminant)) / (2 * a)
        return round(x, 2)
    else:
        return "No real solutions"