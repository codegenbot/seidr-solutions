
def add(x: int, y: int):
    return x + y

# Accept user input for x and y
x = eval(input("Enter first number: "))
y = eval(input("Enter second number: "))

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)