```
from fractions import Fraction

def simplify():
    x = float(input("Enter a fraction (e.g., 3/4): "))
    return str(x) == str(Fraction(x))

simplify()