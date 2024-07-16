# Read input as a single string and split it
paren_strings = input("Enter a list of parenthesized strings separated by spaces: ").split()

# Call the function with the input provided by the user
print(parse_nested_parens(paren_strings))