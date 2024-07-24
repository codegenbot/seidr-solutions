```python
import math


def rounded_avg():
    n = None
    while n is None:
        try:
            n = float(input("Enter first number: "))
        except ValueError:
            print("Invalid input. Please enter a number.")

    m = None
    while m is None:
        try:
            m = float(input("Enter second number: "))
        except ValueError:
            print("Invalid input. Please enter a number.")

    return str(math.ceil((n + m) / 2))


print(rounded_avg())