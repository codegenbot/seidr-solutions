def add(x: int, y: int) -> int:
    return x + y

# Read valid input from the user
x, y = map(int, input("Enter two numbers separated by space: ").rstrip().split())

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:", result)