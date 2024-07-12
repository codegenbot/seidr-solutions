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
        return "Denominator cannot be zero!"
    else:
        return str(Fraction(x, y))


def main():
    print(simplify())


if __name__ == "__main__":
    main()