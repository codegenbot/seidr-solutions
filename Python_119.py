def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if not stack:  # Check if stack is empty
                    return 'No'
                stack.pop()
    if stack:  # Check if stack is not empty
        return 'No'
    return 'Yes'