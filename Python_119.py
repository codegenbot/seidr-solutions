def match_parens(lst):
    stack = []
    matching_parens = {')': '(', ']': '[', '}': '{'}

    for c in lst:
        if c in matching_parens.values():
            if len(stack) == 0 or matching_parens[stack.pop()] != c:
                return 'No'
        elif c in matching_parens.keys():
            stack.append(c)
        else:
            return 'No'
    
    return 'Yes' if len(stack) == 0 else 'No'