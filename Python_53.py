def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter the first integer number: "))
    y = int(input("Enter the second integer number: "))
    result = add(x, y)
    print("Sum:", result)
except ValueError:
    print("Please make sure to enter integers only.")