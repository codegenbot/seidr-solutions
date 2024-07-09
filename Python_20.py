# Read input from user
numbers = list(
    map(float, input("Enter a list of floats separated by spaces: ").split())
)

# Call the function with user input
output = find_closest_elements(numbers)
print(output)