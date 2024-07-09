def max_count_parenthesis(paren_string):
    return [max([s.count("(") for s in group.split()]) for group in paren_string.split()]

# Get input from the user
paren_string = input("Enter a string with parenthesis groups: ")

# Call the function with input
result = max_count_parenthesis(paren_string)

# Display the output
print(result)