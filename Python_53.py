```
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
        while True:
            if cont.lower() != "y" and cont.lower() != "n":
                print("Invalid input. Please enter y or n.")
            else:
                break
        if cont.lower() != "n":
            print("Program ended.")
            break