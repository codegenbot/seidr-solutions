# Read input from user using list comprehension
paren_strings = [
    paren_string
    for paren_string in input(
        "Enter a list of parenthesized strings separated by spaces: "
    ).split()
]

# Call the function with the input provided by the user
print(parse_nested_parens(paren_strings))