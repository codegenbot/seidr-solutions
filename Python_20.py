# Read input from the user as a single input string and split it to convert into a list of floats
numbers = [
    float(x) for x in input("Enter a list of floats separated by spaces: ").split()
]

# Call the function with the user input
output = find_closest_elements(numbers)
print(output)