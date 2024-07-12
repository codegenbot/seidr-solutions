```
from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))

    if y == 0:
        print("Denominator cannot be zero!")
    else:
        print(Fraction(x,y) == 1)

while True:
    simplify()
    response = input("Do you want to continue (yes/no)? ")
    if response.lower() != 'yes':
        break