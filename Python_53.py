def add(x: int, y: int):
    return x + y


def main():
    while True:
        try:
            num1 = None
            while num1 is None:
                try:
                    num1 = int(input("Enter first number: "))
                except ValueError:
                    print("Invalid input. Please enter a valid number.")
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != "y":
                print("Program ended.")
                break
            while True:
                try:
                    num2 = int(input("Enter second number: "))
                    print(f"The sum is {add(num1, num2)}")
                    break
                except (ValueError, KeyboardInterrupt):
                    print("Invalid input. Please enter a valid number.")
        except ValueError:
            if input().lower() == "n":
                print("Program ended.")
                break
            else:
                print(
                    "Invalid input. Please enter a valid number or 'n' to end the program."
                )