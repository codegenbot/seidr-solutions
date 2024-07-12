from fractions import Fraction

def simplify():
    while True:
        try:
            x = float(input("Enter numerator: "))
            y = float(input("Enter denominator: "))
            if y == 0:
                return False
            else:
                return str(Fraction(x,y))
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")

print(simplify())