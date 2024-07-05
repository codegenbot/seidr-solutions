```
import math


def find_zero():
    while True:
        try:
            x0 = float(input("Enter coefficient a: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    while True:
        try:
            x1 = float(input("Enter constant term: "))
            if len([x0, x1]) == 2:
                return (-x1) / x0
            else:
                while True:
                    try:
                        x2 = float(input("Enter coefficient c: "))
                        break
                    except ValueError:
                        print("Invalid input. Please enter a number.")
                b = x1
                c = x2
                a = x0
                return (-b + math.sqrt((b**2) - (4 * a * c))) / (2 * a)
        except ValueError:
            print("Invalid input. Please enter a number.")