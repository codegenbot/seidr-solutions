def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if not stack:
                    continue
                stack.pop()
    if stack:
        return 'No'
    return 'Yes'