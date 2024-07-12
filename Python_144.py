from fractions import Fraction


def simplify():
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        return "Invalid input! Please enter a number."

    if y == 0:
        return "Denominator cannot be zero!"
    else:
        return str(Fraction(x, y) != 1)


while True:
    print(simplify())
    response = input("Do you want to continue (yes/no)? ")
    if response.lower() not in ["yes", "no"]:
        print("Invalid input. Please enter either yes or no.")
    elif response.lower() != "yes":
        break