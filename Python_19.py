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
            num1 = input("Enter first number: ")
            num2 = input("Enter second number: ")
            if not (num1.isdigit() and num2.isdigit()):
                raise ValueError
            num1, num2 = int(num1), int(num2)
            result = func(int(num1), int(num2))
            if result == "Greater":
                print(f"First number is greater than second number")
            elif result == "Less":
                print(f"First number is less than second number")
            else:
                print(f"Both numbers are equal")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        choice = input("Do you want to compare more numbers? (y/n): ")
        if choice.lower() != "y":
            break


def main():
    check(solve)


main()