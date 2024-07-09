def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter first integer: "))
    y = int(input("Enter second integer: "))
    result = add(x, y)
    print(result)
except ValueError:
    print("Please enter integers only.")