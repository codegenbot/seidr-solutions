def match_parens(lst):
    # Initialize a stack to keep track of the parentheses
    stack = []

    # Iterate through each character in the first string
    for char in lst[0]:
        # If the character is an open parenthesis, add it to the stack
        if char == '(':
            stack.append(char)
        # If the character is a close parenthesis, pop the top element from the stack
        elif char == ')':
            if len(stack) == 0 or stack[-1] != '(':
                return 'No'
            else:
                stack.pop()

    # If there are still elements in the stack, it means that the parentheses are not balanced
    if len(stack) > 0:
        return 'No'

    # Iterate through each character in the second string
    for char in lst[1]:
        # If the character is an open parenthesis, add it to the stack
        if char == '(':
            stack.append(char)
        # If the character is a close parenthesis, pop the top element from the stack
        elif char == ')':
            if len(stack) == 0 or stack[-1] != '(':
                return 'No'
            else:
                stack.pop()

    # If there are still elements in the stack, it means that the parentheses are not balanced
    if len(stack) > 0:
        return 'No'

    # If we reach this point, it means that all the parentheses are balanced
    return 'Yes'