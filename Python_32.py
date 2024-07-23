```
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

    discriminant = b**2 - 4*a*c

    if discriminant < 0:
        return f"The program did not receive expected input (no real solutions)."
    else:
        x1 = (b + math.sqrt(discriminant)) / (2 * a)
        x2 = (b - math.sqrt(discriminant)) / (2 * a)
        return f"Root 1: {round(x1, 2)}, Root 2: {round(x2, 2)}"

print(find_zero())