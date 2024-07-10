# Read input from the user
numbers = list(map(int, input().split()))

# Call the rolling_max function with the input list
result = rolling_max(numbers)

print(result)