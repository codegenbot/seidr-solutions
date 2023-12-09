def match_parens(lst):
    # Initialize a stack to keep track of the parentheses
    stack = []

    # Iterate through each character in the first string
    for char in lst[0]:
        # If we encounter an open parenthesis, add it to the stack
        if char == '(':
            stack.append(char)
        # If we encounter a close parenthesis, check if there is a matching open parenthesis in the stack
        elif char == ')':
            if len(stack) == 0 or stack[-1] != '(':
                return 'No'
            else:
                stack.pop()

    # If the stack is not empty at this point, it means there are more close parentheses than open parentheses
    if len(stack) > 0:
        return 'No'

    # Now we iterate through each character in the second string
    for char in lst[1]:
        # If we encounter an open parenthesis, add it to the stack
        if char == '(':
            stack.append(char)
        # If we encounter a close parenthesis, check if there is a matching open parenthesis in the stack
        elif char == ')':
            if len(stack) == 0 or stack[-1] != '(':
                return 'No'
            else:
                stack.pop()

    # If the stack is not empty at this point, it means there are more close parentheses than open parentheses
    if len(stack) > 0:
        return 'No'

    return 'Yes'