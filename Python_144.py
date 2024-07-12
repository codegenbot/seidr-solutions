```
from fractions import Fraction

def simplify():
    while True:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))

        if y == 0:
            print(False)
        else:
            print(Fraction(x,y) == 1)

        response = input("Do you want to continue (yes/no)? ")
        if response.lower() != 'yes':
            break