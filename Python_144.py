from fractions import Fraction

def simplify():
    x = int(input("Enter numerator: "))
    y = int(input("Enter denominator: "))
    return Fraction(x, y) == 1