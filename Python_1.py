from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if set(paren_string) != set("()"):
        return ["Invalid input: Input string must contain only parentheses"]

    result = []
    current_group = ""
    depth = 0
    for char in paren_string:
        if char == "(":
            if depth > 0:
                current_group += char
            depth += 1
        elif char == ")":
            if depth == 0:
                return ["Invalid input: Unmatched closing parenthesis"]
            depth -= 1
            if depth > 0:
                current_group += char
            if depth == 0:
                result.append(current_group)
                current_group = ""

    if depth > 0:
        return ["Invalid input: Unmatched opening parenthesis"]
    if depth < 0:
        return ["Invalid input: Unmatched closing parenthesis"]

    return result

input_str = input().strip()
if all(char in "() " for char in input_str):
    output = separate_paren_groups(input_str)
    print(output)
else:
    print(["Invalid input: Input string must contain only parentheses"])