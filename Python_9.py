# Read input in a single line separated by spaces
numbers = list(map(int, input().split()))

# Call the function with the input
result = rolling_max(numbers)

# Print the output
print(result)