from typing import List

def separate_paren_groups() -> List[str]:
    paren_string = input()
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()

        current_group += char

        if not stack:
            result.append(current_group)
            current_group = ""

    return result

output = separate_paren_groups()
print(output)