def find_zero(xs: list):
    # Your code here

# Prompt user for input
print("Enter a list of integers, separated by spaces:")
input_str = input()

# Parse the input into a list of integers
xs = [int(x) for x in input_str.split()]

# Call the find_zero function with the input list
result = find_zero(xs)

print("The solution is:", result)