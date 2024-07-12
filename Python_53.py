    num1 = 0
    num2 = 0

num1 = 0
num2 = 0

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
            while True:
                try:
                    num2 = int(input("Enter second number: "))
                    break
                except (ValueError, KeyboardInterrupt):
                    print("Invalid input. Please enter a valid number.")
            print(f"The sum is {add(num1, num2)}")
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != "y" and cont.lower() != "n":
                print("Invalid input. Please enter either 'y' or 'n'.")
                break
            elif cont.lower() == "n":
                print("Program ended.")
                break
            else:
                continue
        except ValueError:
            print(
                "Invalid input. Please enter a valid number or 'n' to end the program."
            )