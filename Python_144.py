```python
from fractions import Fraction

def simplify():
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))

        if y == 0:
            return False
        else:
            return Fraction(x,y) == 1

    except ValueError:
        print("Invalid input. Please enter a number.")
        return simplify()

while True:
    print(simplify())
    response = input("Do you want to continue (yes/no)? ")
    if response.lower() not in ['yes', 'no']:
        print("Invalid input. Please enter either yes or no.")
    elif response.lower() != 'yes':
        break