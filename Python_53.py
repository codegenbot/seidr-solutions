def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
    result = add(x, y)
    print("Sum:", result)
except ValueError:
    print("Please enter integers only.")