```
def add(x: int, y: int):
    return x + y

try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    if not isinstance(num1, int) or not isinstance(num2, int):
        raise ValueError("Invalid input. Please enter integers.")

    result = add(num1, num2)
    print(f"Result: {result}")
except ValueError as e:
    print(str(e))