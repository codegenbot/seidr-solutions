# Prompt message for input
print("Enter numbers separated by spaces:")
# Input numbers
numbers = list(map(float, input().split()))
# Call the function with input numbers
output = find_min_difference(numbers)
print(output)