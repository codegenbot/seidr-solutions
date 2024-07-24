```Python
def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                group += stack.pop()
            if stack:
                while stack[-1] != "(":
                    group += stack.pop()
                stack.pop()  # Process the matching opening parenthesis
            else:
                groups.append(group)
                group = ""

    if stack:
        for _ in range(len(stack)):
            group += ")"  # Add remaining opening parentheses to the last group
        groups.append(group)

    return [group + ")" for group in groups]