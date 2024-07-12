def add(x: int, y: int):
    return x + y


def main():
    num1 = 0
    num2 = 0
    while True:
        try:
            print(f"Previous sum: {num1}")
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            print(f"The sum is {add(num1, num2)}")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

        cont = input("Do you want to continue? (y/n): ")
        while True:
            if cont.lower() in ["n", "no"]:
                print("Program ended.")
                break
            elif cont.lower() != "y":
                print("Invalid input. Please enter either 'y' or 'n'.")
                cont = input("Do you want to continue? (y/n): ")
            else:
                break