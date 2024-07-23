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

print(f"The sum of {num1} and {num2} is {add(num1, num2)}")