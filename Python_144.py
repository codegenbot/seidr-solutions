from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))

    if y == 0:
        return False
    else:
        return str(Fraction(x,y)) == '1/1'

print(simplify())