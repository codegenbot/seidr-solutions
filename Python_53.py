def add(x: int, y: int) -> int:
    return x + y

# Read input from the user
while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Please enter valid integer inputs.")

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:", result)