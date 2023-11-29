def get_paren_depth(paren_string):
    stack = []
    result = []
    depth = 0

    for char in paren_string:
        if char == "(":
            stack.append("(")
            depth += 1
        elif char == ")":
            depth -= 1
            result.append(depth + 1)
        else:
            if stack:
                stack.pop()

    while stack:
        result.append(-1)
        stack.pop()

    return result

paren_string = input()
result = get_paren_depth(paren_string)
print(result)