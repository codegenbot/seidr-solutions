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
            if not stack:
                return ["Invalid input"]
            stack.pop()
            current_group += char
            if not stack:
                groups.append(current_group)
                current_group = ""

    if stack:
        return ["Invalid input"]

    return groups


parens = input().strip().replace(" ", "")

while "(" not in parens or ")" not in parens:
    print("Invalid input. Please provide a string containing parentheses.")
    parens = input().strip().replace(" ", "")

result = separate_paren_groups(parens)
print(result)