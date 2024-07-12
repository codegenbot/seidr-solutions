from fractions import Fraction


def simplify():
    while True:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))

        if y == 0:
            print("Denominator cannot be zero.")
        else:
            if Fraction(x, y) == 1:
                print("The fraction is simplified.")
            else:
                print(f"The fraction {x}/{y} is not simplified.")


simplify()