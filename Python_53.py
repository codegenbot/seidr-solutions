def add(x: int, y: int) -> int:
    return x + y


# Read input from the user and ensure valid integer inputs
while True:
    try:
        x, y = map(int, input("Enter two numbers separated by space: ").split())
        break
    except ValueError:
        print("Invalid input. Please enter two valid integers separated by space.")

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:", result)