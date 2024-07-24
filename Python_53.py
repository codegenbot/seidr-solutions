def add(x: int, y: int) -> int:
    return x + y

# Read input from the user
x = int(input("Enter first number:\n"))
y = int(input("Enter second number:\n"))

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:\n", result)