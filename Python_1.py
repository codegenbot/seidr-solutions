if paren_string.startswith("(") and paren_string.endswith(")"):
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()
        else:
            return []

    if not stack:
        result = []
        current_group = ""

        for char in paren_string[1:-1]:  
            if char == "(":
                if current_group:
                    result.append(current_group)
                current_group = ""
            elif char == ")":
                result.append(current_group)
                current_group = ""
            else:
                current_group += char

        if current_group:
            result.append(current_group)

        return result

    return []

return []