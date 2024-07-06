def separate_paren_groups(paren_string):
    stack = []
    result = []
    level = 0
    for c in paren_string:
        if c == "(":
            level += 1
            stack.append(c)
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
                level -= 1
                if level == 0:
                    result.append("".join(stack))
                    stack = []
                    level = 0
        else:
            # Handle consecutive opening or closing parentheses
            counter = 0
            while len(stack) > 0 and stack[-1] in ["(", ")"]:
                if stack[-1] == c:
                    counter += 1
                elif counter == 2:
                    result.append("".join(stack))
                    stack = []
                    level = 0
            if len(stack) > 0:
                result.append("".join(stack))
                stack = []
                level = 0
    return [group for group in result if group[0] == "(" and group[-1] == ")" and len(group) % 2 == 0 and level == 0]