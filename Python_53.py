```Python
def add(x: int, y: int):
    return x + y

try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    print(f"The sum is {add(num1, num2)}")
except ValueError:
    print("Invalid input. Please enter valid integers.")