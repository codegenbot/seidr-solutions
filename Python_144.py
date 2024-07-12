from fractions import Fraction


def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))

    if y == 0:
        return False
    else:
        return Fraction(x, y) == 1


while True:
    print(simplify())
    response = input("Do you want to continue (yes/no)? ")
    while response.lower() not in ["yes", "no"]:
        print("Invalid input. Please enter either yes or no.")
        response = input("Do you want to continue (yes/no)? ")
    if response.lower() != "yes":
        break