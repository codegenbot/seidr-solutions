def add(x: float, y: float) -> float:
    return x + y


# Read and parse user input as floats
x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))

# Calculate the sum of x and y using the add function
result = add(x, y)

# Print the result
print(f"The sum of {x} and {y} is {result}")