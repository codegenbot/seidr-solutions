def add(x: int, y: int) -> int:
    return x + y

x = None
while x is None:
    try:
        x = int(input("Enter first number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

y = None
while y is None:
    try:
        y = int(input("Enter second number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

result = add(x, y)
print(result)