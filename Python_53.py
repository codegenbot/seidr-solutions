```
def add(x: int, y: int):
    return x + y

try:
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    result = add(int(num1), int(num2))
    print(f"Result: {result}")
except ValueError:
    print("Invalid input. Please enter integers.")