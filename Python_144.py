from fractions import Fraction


def simplify():
    x = float(input("Enter value of x: "))
    n = float(input("Enter value of n: "))

    return Fraction(x).limit_denominator() == Fraction(n).limit_denominator()


print(simplify())