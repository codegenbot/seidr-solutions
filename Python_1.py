import re

def separate_paren_groups(paren_string):
    groups = re.findall(r'\(.*?\)', paren_string)
    return groups

# Take input from the user
input_string = input("Enter a string containing parentheses: ")

# Call the function with the input value
result = separate_paren_groups(input_string)

# Print the result
print(result)