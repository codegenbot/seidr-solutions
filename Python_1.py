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

parens = input("Enter a string containing parentheses: ").strip()
if "(" in parens and ")" in parens and parens.count("(") == parens.count(")"):
    result = separate_paren_groups(parens)
    print(result)
else:
    print("Invalid input. Please provide a string containing both opening and closing parentheses.")