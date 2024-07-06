
# Accept user input for both numbers
numbers = list(map(int, input("Enter two numbers separated by a space: ").split()))

# Call the add function with the input values
result = add(numbers[0], numbers[1])

# Print the result to the console
print("Result:", result)