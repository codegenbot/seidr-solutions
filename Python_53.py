def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter the first integer: "))
    y = int(input("Enter the second integer: "))
except ValueError:
    print("Please provide valid integer inputs.")
else:
    result = add(x, y)
    print(result)