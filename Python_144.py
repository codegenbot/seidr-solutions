```
from fractions import Fraction


def simplify():
    while True:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
        if y != 0 and Fraction(x, y) == 1:
            return
        print("Invalid input. Denominator cannot be zero.")