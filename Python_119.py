def match_parens(lst):
    stack = []
    parentheses = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in parentheses:
            stack.append(c)
        elif c in parentheses.values():
            opening_paren = next((key for key, value in parentheses.items() if value == c), None)
            if not stack or stack.pop() != opening_paren:
                return 'No'

    return 'No' if stack else 'Yes'