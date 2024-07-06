def separate_paren_groups(paren_string):
    stack = []
    result = []
    count = 0
    for c in paren_string:
        if c == "(":
            stack.append(c)
            count += 1
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
                count -= 1
            else:
                while len(stack) > 0 and stack[-1] in ["(", ")"]:
                    stack.pop()
                result.append([c])
    return [
        group
        for group in result
        if group[0] == "(" and group[-1] == ")" and len(group) % 2 == 0 and count == 0
    ]