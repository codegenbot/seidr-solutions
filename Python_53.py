def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter first integer: "))
    y = int(input("Enter second integer: "))
except ValueError:
    print("Please provide integer inputs only.")
else:
    result = add(x, y)
    print(result)