def add(x: int, y: int) -> int:
    return x + y

# Update input method to read line
x, y = map(int, input("Enter two numbers separated by space:\n").strip().split())

# Call the add function with user input
result = add(x, y)

# Print the result
print("The sum is:", result)