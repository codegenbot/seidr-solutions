from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    n = float(input("Enter denominator: "))
    return f"The simplified fraction is {Fraction(x)/n}"