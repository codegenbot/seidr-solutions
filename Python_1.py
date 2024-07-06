```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char not in ["(", ")"]:
            raise ValueError("Invalid character")

        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            stack.pop()
            group += char
            result.append(group) if not stack else result.append(group + ")")

    return [group for group in result if group]