def match_parens(lst):
    stack = []
    open_parens = set(['(', '{', '['])
    close_parens = set([')', '}', ']'])
    parentheses = {'(': ')', '{': '}', '[': ']'}
    for char in lst[0] + lst[1]:
        if char in open_parens:
            stack.append(char)
        elif char in close_parens:
            if not stack or char != parentheses[stack.pop()]:
                return 'No'
    return 'Yes' if not stack else 'No'