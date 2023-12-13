def match_parens(lst):
    stack = []
    opening_parens = ['(', '[', '{']
    closing_parens = [')', ']', '}']
    matching_parens = {')': '(', ']': '[', '}': '{'}

    for c in lst:
        if c in opening_parens:
            stack.append(c)
        elif c in closing_parens:
            if len(stack) == 0 or stack[-1] != matching_parens[c]:
                return 'No'
            stack.pop()

    return 'Yes' if len(stack) == 0 else 'No'