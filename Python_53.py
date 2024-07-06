
def add(x: int, y: int):
    return x + y

# Prompt user for input
print("Enter two numbers separated by a space: ")
user_input = input().split()

# Call the `add` function with user inputs
result = add(int(user_input[0]), int(user_input[1]))

# Print the result
print("The sum is:", result)