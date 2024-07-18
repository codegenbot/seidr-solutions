from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(":
            group += char
        elif char == ")":
            group += char
            result.append(group)
            group = ""
    if group:
        result.append(group)
    return result


# Read input from user
input_string = input("Enter parentheses string: ")
output = separate_paren_groups(input_string)
print(output)