def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
except ValueError:
    print("Invalid input. Please enter valid numbers.")
else:
    result = add(x, y)
    print(result)