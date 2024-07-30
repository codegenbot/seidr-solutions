from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char in "()":
            current_group += char
        else:
            if current_group:
                result.append(current_group)
                current_group = ""
            else:
                current_group += char
    if current_group:
        result.append(current_group)
    return result

# Input format: a string containing parentheses
# Output format: a list of strings containing groups of parentheses
paren_string = input()
result = separate_paren_groups(paren_string)
print(result)