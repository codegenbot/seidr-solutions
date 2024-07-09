# Read input from the user
xs = list(
    map(float, input("Enter the elements of the list separated by spaces: ").split())
)

# Call the function with user input
result = find_zero(xs)
print(result)