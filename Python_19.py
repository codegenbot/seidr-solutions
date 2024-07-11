def solve(num1, num2):
    if num1 > num2:
        return "Greater"
    elif num1 < num2:
        return "Less"
    else:
        return "Equal"


def check(func):
    func_name = input("Enter your function name (e.g., 'solve'): ")
    while True:
        try:
            num1 = int(input(f"Enter first number for {func_name}(): "))
            num2 = int(input(f"Enter second number for {func_name}() : "))
            result = eval(f"{func_name}({num1}, {num2})")
            if result == "Greater":
                print(
                    f"The first number {num1} is greater than the second number {num2}"
                )
            elif result == "Less":
                print(f"The first number {num1} is less than the second number {num2}")
            cont = input("Do you want to compare more numbers? (y/n): ")
            if cont.lower() != "y":
                break
        except ValueError:
            print("Invalid input. Please enter valid integers.")


def main():
    check(solve)


main()