from fractions import Fraction


def simplify():
    while True:
        try:
            x = float(input("Enter numerator: "))
            y = float(input("Enter denominator: "))
            break
        except ValueError:
            print("Invalid input! Please enter a number.")

    if y == 0:
        return str(Fraction(x, y))
    else:
        return str(Fraction(x, y))


def main():
    print(simplify())


main()