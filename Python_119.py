def match_parens(lst):
    stack = []
    opening_parens = ['(', '[', '{']
    closing_parens = [')', ']', '}']
    matching_parens = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in opening_parens:
            stack.append(c)
        elif c in closing_parens:
            if len(stack) == 0 or matching_parens[stack.pop()] != c:
                return 'No'
    
    return 'Yes' if len(stack) == 0 else 'No'