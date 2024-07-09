```
def match_parens(lst):
    """stack = []
    for s in lst:
        stack_s = []
        for char in s:
            if char == '(':
                stack_s.append(char)
            elif char == ')':
                if len(stack_s) == 0:
                    return 'No'
                else:
                    stack_s.pop()
        while stack_s and stack:
            if stack_s.pop() != stack.pop():
                return 'No'
    return 'Yes'"""
stack = []
for s in lst:
    stack_s = []
    for char in s:
        if char == '(':
            stack_s.append(char)
        elif char == ')':
            if len(stack_s) == 0:
                return 'No'
            else:
                stack_s.pop()
    while stack_s and stack:
        if stack_s.pop() != stack.pop():
            return 'No'
return 'Yes''