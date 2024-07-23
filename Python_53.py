```Python
def add(x: int, y: int):
    return x + y

while True:
    try:
        num1 = int(input("Enter first number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

while True:
    try:
        num2 = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

print(f"The sum of {num1} and {num2} is {add(num1, num2)}")