def solve(num1, num2):
    if num1 > num2:
        return "Greater"
    elif num1 < num2:
        return "Less"
    else:
        return "Equal"


def check(func):
    while True:
        try:
            result = func(
                int(input("Enter first number: ") or 0),
                int(input("Enter second number: ") or 0),
            )
            if result == "Greater":
                print(f"First number is greater than second number")
            elif result == "Less":
                print(f"First number is less than second number")
            else:
                print(f"Both numbers are equal")
        except ValueError:
            print("Invalid input. Please enter integers.")


def main():
    while True:
        check(solve)
        choice = input("Do you want to compare more numbers? (y/n): ")
        if choice.lower() != "y":
            break


main()