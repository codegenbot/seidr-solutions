from fractions import Fraction

def simplify():
    while True:
        try:
            x = float(input("Enter numerator: "))
            y = float(input("Enter denominator: "))

            if y == 0:
                return False
            else:
                return Fraction(x,y) == 1
        except ValueError:
            print("Invalid input. Please enter a number.")

while True:
    print(simplify())
    response = input("Do you want to continue (yes/no)? ")
    if response.lower() != 'yes':
        break