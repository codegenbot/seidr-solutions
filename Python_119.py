def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')' and stack:
                stack.pop()
            else:
                return 'No'
    if stack:
        return 'No'
    else:
        return 'Yes'