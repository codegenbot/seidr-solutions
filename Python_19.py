def solve(num1, num2):
    if num1 > num2:
        return "Greater"
    elif num1 < num2:
        return "Less"
    else:
        return "Equal"


def check(func):
    result = func(
        int(input("Enter first number: ")), int(input("Enter second number: "))
    )

    if result == "Greater":
        print(f"First number is greater than second number")
    elif result == "Less":
        print(f"First number is less than second number")
    else:
        print(f"Both numbers are equal")


def main():
    check(solve)


main()