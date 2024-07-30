from typing import List


def separate_paren_groups(parens: str) -> List[str]:
    stack = []
    groups = []
    current_group = ""

    for char in parens:
        if char == "(":
            if current_group and not stack:
                groups.append(current_group)
                current_group = ""
            stack.append("(")
            current_group += char
        elif char == ")":
            if not stack:
                return ["Invalid input"]
            stack.pop()
            current_group += char

    if stack:
        return ["Invalid input"]

    if current_group:
        groups.append(current_group)

    return groups


parens = input("Enter a string containing parentheses: ").strip()
if "(" in parens or ")" in parens:
    result = separate_paren_groups(parens)
    print(result)
else:
    print(
        "Invalid input. Please provide a string containing both opening and closing parentheses."
    )