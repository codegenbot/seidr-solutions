def match_parens(lst):
    stack = []
    for char in lst:
        if char == '(' or char == '[' or char == '{':
            stack.append(char)
        else:
            if not stack or (char == ')' and stack.pop() != '(') or (char == ']' and stack.pop() != '[') or (char == '}' and stack.pop() != '{'):
                return 'No'
    if not stack:
        return 'Yes'
    else:
        return 'No'