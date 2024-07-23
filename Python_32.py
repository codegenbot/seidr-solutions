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

    if discriminant > 0: 
        x1 = (b + math.sqrt(discriminant)) / (2 * a)
        x2 = (b - math.sqrt(discriminant)) / (2 * a)
        return f"Root 1: {round(x1, 2)}, Root 2: {round(x2, 2)}"
    elif discriminant == 0:
        x = -b / (2 * a) 
        return f"Root: {round(x, 2)}"
    else:
        if b > 0:
            return "This equation has no real roots"
        else:
            root1 = (-b + math.sqrt(discriminant)) / (2 * a)
            root2 = (-b - math.sqrt(discriminant)) / (2 * a)
            return f"This equation has two complex roots: {round(root1, 2)} + {(c/a**(3/2))**0.5}i and {round(root2, 2)} - {(c/a**(3/2))**0.5}i"
print(find_zero())