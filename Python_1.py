from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    depth = 0
    for char in paren_string:
        if char == "(":
            if depth > 0:
                current_group += char
            depth += 1
        elif char == ")":
            depth -= 1
            current_group += char
            if depth == 0:
                result.append(current_group)
                current_group = ""
    if current_group:
        result.append(current_group)
    return result

# Read input from user
paren_string = input("Enter the string with parenthesis: ")
output = separate_paren_groups(paren_string)
print(output)