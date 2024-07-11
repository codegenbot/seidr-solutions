if stack:
    while stack[-1] != "(":
        group += stack.pop()
    if stack:
        stack.pop()  # Pop the remaining '('
    groups.append(group + ")")
else:
    groups.append(group)
return [group] + groups