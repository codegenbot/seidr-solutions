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

user_input = input("Enter a list of strings: ")
lst = [s.strip() for s in user_input.split(',')]
parsed_lst = [[c for c in l.split()] for l in lst]
print(match_parens(parsed_lst))