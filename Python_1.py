for char in paren_string:
    if char == " ":
        continue
    if char == "(":
        stack.append(char)
        current_group += char
    elif char == ")":
        stack.pop()
        current_group += char
        if not stack:
            groups.append(current_group.strip())
            current_group = ""
    else:
        if stack:
            current_group += char
        else:
            return [group.strip() for group in groups]