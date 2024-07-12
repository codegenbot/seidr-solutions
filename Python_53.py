```
def add(x: int, y: int):
    return x + y


def main():
    num1 = int(input("Enter first number: "))
    while True:
        try:
            num2 = int(input("Enter second number: "))
            print(f"The sum is {add(num1, num2)}")
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() == "n":
                print("Program ended.")
                break
            else:
                num1 = num2
        except ValueError:
            print("Invalid input. Please enter a valid number.")
    input("Press Enter to exit...")