def match_parens(lst):
    stack = []
    opening_parens = ['(', '[', '{']
    closing_parens = [')', ']', '}']
    matching_parens = {')': '(', ']': '[', '}': '{'}

    for c in lst:
        if c in opening_parens:
            stack.append(c)
        elif c in closing_parens:
            if not stack or stack[-1] != matching_parens[c]:
                return 'No'
            stack.pop()

    if not stack:
        return 'Yes'
    return 'No'