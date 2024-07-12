```
from fractions import Fraction


def simplify():
    while True:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))

        if y == 0:
            print("Cannot have a denominator of zero. Please try again.")
        else:
            print(f"{x}/{y} is simplified to {'1' if Fraction(x, y) == 1 else str(Fraction(x, y))}")


simplify()