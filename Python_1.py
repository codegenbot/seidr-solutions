from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1

        temp += char

        if count == 0:
            result.append(temp[1:-1])  # Exclude the first and last parentheses
            temp = ""

    return result