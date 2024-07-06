```
def add(x: int, y: int) -> int:
    return x + y


# Accept user input for x and y
while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
        continue
    else:
        break

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)