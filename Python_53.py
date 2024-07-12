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

    while True:
        print(f"The sum is {add(num1, num2)}")
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() in ["n", "no"]:
            print("Program ended.")
            break
        elif cont.lower() == "y":
            while True:
                try:
                    num1 = int(input("Enter first number: "))
                    num2 = int(input("Enter second number: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid number.")