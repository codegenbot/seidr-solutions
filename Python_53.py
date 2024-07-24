def add(x: int, y: int) -> int:
    return x + y

# Read input from the user and ensure valid integer inputs
while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter valid integers.")

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:", result)