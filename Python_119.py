def match_parens(lst):
    stack = []
    for char in "".join(lst):  
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) == 0:  
                return "No"
            else:
                stack.pop()
    if len(stack) == 0:  
        return "Yes"
    else:
        return "No"