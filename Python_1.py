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
            groups.append(current_group)
            current_group = ""
else:
    current_group += char
    while stack:
        current_group += char
        stack.pop()
    groups.append(current_group)

return groups