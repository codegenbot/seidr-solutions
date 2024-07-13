```
import math
def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient 'a': "))
            b = float(input("Enter coefficient 'b': "))
            c = float(input("Enter coefficient 'c': "))
            d = float(input("Enter coefficient 'd': "))

            if abs(a) < 1e-6:
                return round(0, 2)

            n = 4
            xs = [a, b, c, d]

            if len(xs) % 2 != 0:
                raise ValueError("xs must have even number of coefficients")
            x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
            return round(x, 2)

        except ValueError as e:
            print(f"Invalid input: {e}")