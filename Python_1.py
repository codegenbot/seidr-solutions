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
                # Check if the stack is empty after popping the closing parenthesis
                if not stack:
                    result.append(c)
        elif c in "()":
            continue
        else:
            raise ValueError("Invalid input string")
    
    return [group for group in result if group[0] == "(" and group[-1] == ")" and len(group) % 2 == 0 and count == 0]