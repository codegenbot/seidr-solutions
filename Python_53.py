def add(x: int, y: int):
    return x + y

try:
    x = input("Enter the first integer number: ")
    y = input("Enter the second integer number: ")
    if not x.isdigit() or not y.isdigit():
        raise ValueError
    x = int(x)
    y = int(y)
    result = add(x, y)
    print("Sum:", result)
except ValueError:
    print("Please make sure to enter integers only.")