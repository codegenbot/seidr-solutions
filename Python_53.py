def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
except ValueError:
    print("Invalid input. Please enter integer numbers.")
else:
    print(add(x, y))