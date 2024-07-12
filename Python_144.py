from fractions import Fraction


def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))
    return y != 0 and Fraction(x, y) == 1


print(simplify())