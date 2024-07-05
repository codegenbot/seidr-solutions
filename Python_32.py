import math

def find_zero():
    a = float(input("Enter coefficient a: "))
    b = float(input("Enter coefficient b: "))
    c = float(input("Enter constant c: "))

    if (b ** 2) - (4 * a * c) < 0:
        return None
    else:
        return (-b + math.sqrt((b ** 2) - (4 * a * c))) / (2 * a)

print(find_zero())