```
import math


def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient 'a': "))
            b = float(input("Enter coefficient 'b': "))
            c = float(input("Enter coefficient 'c': "))

            discriminant = b**2 - 4 * a * c

            if discriminant > 0:
                x1 = (b + math.sqrt(discriminant)) / (2 * a)
                x2 = (b - math.sqrt(discriminant)) / (2 * a)
                return f"Root 1: {round(x1, 2)}, Root 2: {round(x2, 2)}"
            elif discriminant == 0:
                x = -b / (2 * a)
                return f"Root: {round(x, 2)}"
            else:
                return "No real roots found"
        except ValueError:
            print("Invalid input. Please enter numeric values.")


print(find_zero())