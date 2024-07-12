from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    n = float(input("Enter denominator: "))
    return Fraction(x, 1).limit_denominator() == Fraction(n)