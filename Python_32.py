import math


def find_zero(a, b, c):
    try:
        x = (b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
        return round(x, 2)
    except ZeroDivisionError:
        print("The equation has no real solution.")
        return None


a = float(input("Enter coefficient 'a': "))
b = float(input("Enter coefficient 'b': "))
c = float(input("Enter coefficient 'c': "))

print(find_zero(a, b, c))