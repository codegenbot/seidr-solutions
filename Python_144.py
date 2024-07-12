```
from fractions import Fraction

def simplify():
    print("Enter numerator: ")
    x = float(input())
    print("Enter denominator: ")
    y = float(input())

    if y == 0:
        return False
    else:
        return Fraction(x,y) == 1

print(simplify())