from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    n = float(input("Enter denominator: "))
    return x / n == Fraction(n)