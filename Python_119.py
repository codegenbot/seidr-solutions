def match_parens(lst):
    stack = []
    parentheses = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in parentheses:
            stack.append(c)
        elif c in parentheses.values():
            if not stack or parentheses.get(stack.pop()) != c:
                return 'No'

    return 'Yes' if not stack else 'No'