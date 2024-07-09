def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    print(add(x, y))
except ValueError:
    print("Please enter valid integer numbers as input.")