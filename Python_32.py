```Python
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

    x = (b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    
    return round(x, 2)

print(find_zero())