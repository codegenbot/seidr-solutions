def match_parens(lst):
    stack = []
    parentheses = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in parentheses:
            stack.append(c)
        elif c in parentheses.values():
            if not stack or parentheses[stack[-1]] != c:
                return 'No'
            stack.pop()

    return 'Yes' if not stack else 'No'