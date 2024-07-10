```
def match_parens(lst):
    stack = []
    for s in lst:
        new_str = ''
        for c in s:
            if c == '(':
                stack.append(c)
                new_str += ' ('
            elif c == ')':
                if len(stack) > 0:
                    stack.pop()
                    new_str += ') '
                else:
                    return 'No'
            else:
                new_str += c
        print(new_str.strip())
    return 'Yes'

user_input = input("Enter a list of strings: ")
lst = [s.strip() for s in user_input.split(',')]
print(match_parens([l for l in lst]))