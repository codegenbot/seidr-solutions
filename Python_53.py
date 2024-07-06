
def add(x: int, y: int):
    return x + y

# Get input from user
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

# Call the `add` function with the user's input
result = add(x, y)

# Print the output to the console
print("The sum of", x, "and", y, "is", result)