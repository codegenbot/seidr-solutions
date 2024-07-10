def match_parens(lst):
    for s in lst:
        stack = []
        for char in s:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if not stack:
                    return "No"
                stack.pop()
        if stack or stack:  # Update condition to handle extra opening parentheses
            return "No"
    return "Yes"