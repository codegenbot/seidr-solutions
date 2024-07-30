from typing import List

def separate_paren_groups(parens: str) -> List[str]:
    stack = []
    groups = []
    current_group = ""

    for char in parens:
        if char == "(":
            stack.append("(")
            current_group += char
        elif char == ")":
            stack.pop()
            current_group += char
            if not stack:
                groups.append(current_group)
                current_group = ""

    return groups

parens = input().strip()
result = separate_paren_groups(parens)
print(result)