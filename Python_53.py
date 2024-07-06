def add(x: int, y: int):
    return x + y

# Read input from user
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

# Check if the inputs are integers
if not isinstance(x, int) or not isinstance(y, int):
    raise ValueError("Inputs must be integers")

# Print result
print(add(x, y))