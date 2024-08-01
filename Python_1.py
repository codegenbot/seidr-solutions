from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not set(paren_string).issubset({'(', ')'}):
        return []

    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")":
            temp += char
            result.append(temp)
            temp = ""
    return result

# Read input from user
paren_string = input("Enter a string of parentheses: ")

# Call the function with the input
output = separate_paren_groups(paren_string)

# Print the output
print(output)