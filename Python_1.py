def separate_paren_groups(paren_string):
    stack = []
    result = []

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            group = ""
            while stack and stack[-1] != "(":
                group = stack.pop() + group
            if stack:
                stack.pop()
            result.append(group)

    return result


# Add a sample test case input as a string with parentheses
paren_string = "((a)(b((c)(d)))(e))"
print(separate_paren_groups(paren_string))