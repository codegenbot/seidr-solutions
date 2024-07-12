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
        return None

while True:
    result = simplify()
    if result is not None and result:
        print(result)
    else:
        break
    
    response = input("Do you want to continue (yes/no)? ")
    while response.lower() not in ['yes', 'no']:
        print("Invalid input. Please enter either yes or no.")
        response = input("Do you want to continue (yes/no)? ")
    if response.lower() != 'yes':
        break