def separate_paren_groups(paren_string):
    stack = []
    result = []
    
    for char in paren_string:
        if char == "(":
            stack.append("")
        elif char == ")":
            group = ""
            while stack and stack[-1] != "":
                group = stack.pop() + group
            if stack:
                stack.pop()
            stack.append("(" + group + ")")
        else:
            for i in range(len(stack)):
                stack[i] += char
    
    return stack