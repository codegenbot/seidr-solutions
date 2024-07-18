from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            current_group += char
        elif char == ")":
            current_group += char
            result.append(current_group)
            current_group = ""
    return result

# Read input from user
paren_string = input("Enter the string of parentheses: ")
# Call the function with the input string
output = separate_paren_groups(paren_string)
# Print the result
print(output)