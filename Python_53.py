def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter the first integer number: "))
    y = int(input("Enter the second integer number: "))
    if not isinstance(x, int) or not isinstance(y, int):
        raise ValueError
    result = add(x, y)
    print("Sum:", result)
except ValueError:
    print("Please make sure to enter integers only.")