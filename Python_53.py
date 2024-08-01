def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter first integer: "))
except ValueError:
    print("Please enter a valid integer.")
try:
    y = int(input("Enter second integer: "))
except ValueError:
    print("Please enter a valid integer.")

result = add(x, y)
print("Sum of the two integers:", result)