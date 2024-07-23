```
def add(x: int, y: int):
    return x + y


num1 = 0
num2 = 0

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

while True:
    try:
        confirm = input("Press Enter to execute, or type 'q' to quit: ")
        if confirm.lower() == "q":
            break
        print(f"The sum of {num1} and {num2} is {add(num1, num2)}")
    except Exception as e:
        print("Error occurred. Please check the input.")