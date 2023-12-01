def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter numbers only.")