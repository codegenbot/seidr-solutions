def add(x: int, y: int):
    return x + y


def main():
    while True:
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
            except ValueError:
                print("Invalid input. Please enter a valid number.")

        print(f"The sum is {add(num1, num2)}")

        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() != "y":
            print("Program ended.")
            break