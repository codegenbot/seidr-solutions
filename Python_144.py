from fractions import Fraction


def simplify(x, n):
    return Fraction(x).limit_denominator() == Fraction(n).limit_denominator()