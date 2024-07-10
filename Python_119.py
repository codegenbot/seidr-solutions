```
def match_parens(lst):
    for s in lst:
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
        if len(stack) != 0:
            return 'No'
    return 'Yes'

user_input = input("Enter a list of strings: ")
lst = [s.strip() for s in user_input.split(',')]
print(match_parens([l for l in lst]))