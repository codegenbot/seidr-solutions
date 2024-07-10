```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
    return 'Yes' if len(stack) == 0 else 'No'

lst = [s.strip() for s in input("Enter a list of strings: ").split(',')]
print(match_parens(lst))