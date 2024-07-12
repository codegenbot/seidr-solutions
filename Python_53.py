def add(x: int, y: int):
    return x + y


def main(num1: int = 0, num2: int = 0):
    while True:
        try:
            print(f"Previous sum: {num1}")
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    print(f"The sum is {add(num1, num2)}")
    cont = input("Do you want to continue? (y/n): ")
    while True:
        if cont.lower() in ["n", "no"]:
            break
        elif cont.lower() != "y":
            print("Invalid input. Please enter either 'y' or 'n'.")
            cont = input("Do you want to continue? (y/n): ")
        else:
            main(num1, num2)
    if cont.lower() == "n":
        print("Program ended.")