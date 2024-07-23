```
def add(x: int, y: int):
    while True:
        try:
            num1 = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    while True:
        try:
            num2 = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    confirm = input("Press Enter to execute, or type 'q' to quit: ")
    if confirm.lower() == 'q':
        pass
    else:
        print(f"The sum of {num1} and {num2} is {add(num1, num2)}")