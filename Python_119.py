def match_parens(lst):
    stack = []
    open_parentheses = []
    parentheses = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in parentheses:
            open_parentheses.append(c)
        elif c in parentheses.values():
            if not open_parentheses or parentheses[open_parentheses[-1]] != c:
                return 'No'
            open_parentheses.pop()

    return 'Yes' if not open_parentheses else 'No'