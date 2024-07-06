def add(x: int, y: int):
    return x + y


# Accept user input for x and y
while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Please enter a valid integer.")

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)