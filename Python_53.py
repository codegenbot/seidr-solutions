```
def add(x: int, y: int):
    result = x + y
    print(f"The sum of {x} and {y} is {result}")

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
    confirm = input("Press Enter to execute, or type 'q' to quit: ")
    if confirm.lower() == 'q':
        break
    add(num1, num2)