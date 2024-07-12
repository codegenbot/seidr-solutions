from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    n = float(input("Enter denominator: "))
    return Fraction(x, n) == Fraction(x).limit_denominator()