def simplify(x, n):
    from fractions import Fraction

    return Fraction(x).limit_denominator() == Fraction(n).limit_denominator()