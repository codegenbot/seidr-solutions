```
from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))

    if y == 0:
        print("Invalid input! Denominator cannot be zero.")
    else:
        return Fraction(x, y) == 1

print(simplify())