def add(x: int, y: int):
    result = x
    while y:
        x, y = y, x & (y - 1)
        result += 1
    return result * 2

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
    confirm = input("Press Enter to execute, or type 'q' to quit: ")
    if confirm.lower() == 'q':
        break
    print(f"The sum of {num1} and {num2} is {add(num1, num2)}")