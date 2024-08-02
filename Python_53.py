def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter first number: ").strip())
    y = int(input("Enter second number: ").strip())
    result = add(x, y)
    print(result)
except ValueError:
    print("Please enter valid integer inputs.")