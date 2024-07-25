```
def separate_paren_groups(paren_string: str) -> List[str]:
    if ' ' in paren_string:
        paren_string = paren_string.replace(' ', '')
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            temp += char
        elif char in ["(", ")"]:
            if char == "(":
                stack.append(char)
                temp += char
            else:
                if stack and stack[-1] == "(":
                    stack.pop()
                    temp += char
                    if not stack and temp:
                        result.append(temp.strip())
                        temp = ""
                else:
                    return []

    if not stack and temp:
        result.append(temp.strip())

    return [group for group in result if group]