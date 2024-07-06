def match_parens(lst):
    # Initialize a stack to keep track of open parentheses
    stack = []

    # Iterate through each character in the first string
    for char in lst[0]:
        # If we encounter an open parenthesis, add it to the stack
        if char == "(":
            stack.append(char)
        # If we encounter a close parenthesis, pop the top element from the stack
        elif char == ")":
            if len(stack) > 0:
                stack.pop()
            else:
                return "No"

    # If the stack is not empty at this point, it means we have unbalanced parentheses
    if len(stack) > 0:
        return "No"

    # Iterate through each character in the second string
    for char in lst[1]:
        # If we encounter an open parenthesis, add it to the stack
        if char == "(":
            stack.append(char)
        # If we encounter a close parenthesis, pop the top element from the stack
        elif char == ")":
            if len(stack) > 0:
                stack.pop()
            else:
                return "No"

    # If the stack is not empty at this point, it means we have unbalanced parentheses
    if len(stack) > 0:
        return "No"

    return "Yes"