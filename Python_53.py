def add(x: int, y: int):
    return x + y


# Read input from user
user_input = input("Enter two numbers to add: ")

# Split the input into two integers
num1, num2 = map(int, user_input.split())

# Call the `add` function with those arguments
result = add(num1, num2)

# Print the result
print("The sum of", num1, "and", num2, "is", result)