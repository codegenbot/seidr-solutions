def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter first integer: "))
    y = int(input("Enter second integer: "))
except ValueError:
    print("Please enter integers only.")
else:
    result = add(x, y)
    print("Sum of the two integers:", result)