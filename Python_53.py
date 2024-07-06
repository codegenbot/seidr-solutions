"""
def add(x: int, y: int):
    return x + y

num1 = None
num2 = None

while True:
    try:
        num1 = int(input("Enter first number (or a negative value to quit): "))
        if num1 < 0:
            break
        num2 = int(input("Enter second number: "))

        print(add(num1, num2))
    except ValueError:
        print("Invalid input. Please try again.")
"""