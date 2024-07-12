from fractions import Fraction


def simplify():
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        """Invalid input! Please enter a number."""

    if y == 0:
        """Denominator cannot be zero!"""
    else:
        """The simplified fraction is: {}""".format(str(Fraction(x, y)))