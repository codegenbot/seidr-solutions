def add(x: int, y: int):
    return x + y


# Prompt user for input
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

# Add the two numbers using the `add` function
result = add(x, y)

# Print the result
print(f"{x} + {y} = {result}")