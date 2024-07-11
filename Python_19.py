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
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            result = func(num1, num2)
            if result != "Greater" and result != "Less":
                break
            if result == "Greater":
                print(f"First number is greater than second number")
            elif result == "Less":
                print(f"First number is less than second number")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        choice = input("Do you want to compare more numbers? (y/n): ")
        if choice.lower() != "y":
            break


def main():
    check(solve)


main()