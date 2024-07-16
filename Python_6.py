# Define the function to parse nested parentheses
def parse_nested_parens(paren_strings):
    def count_nested_parens(paren_string):
        count = 0
        max_count = 0
        for char in paren_string:
            if char == '(':
                count += 1
                max_count = max(max_count, count)
            elif char == ')':
                count -= 1
        return max_count
    
    return [count_nested_parens(paren_string) for paren_string in paren_strings]

# Read input from user using list comprehension
paren_strings = [
    paren_string
    for paren_string in input(
        "Enter a list of parenthesized strings separated by spaces: "
    ).split()
]

# Call the function with the input provided by the user
print(parse_nested_parens(paren_strings))