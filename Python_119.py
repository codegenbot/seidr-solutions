```
def match_parens(lst):
    stack = []
    for s in lst:
        if '(' in s or ')' in s:  
            for c in s:
                if c == '(': 
                    stack.append(c)
                elif c == ')':
                    if not stack:
                        return False  # If stack is empty when closing parenthesis is encountered, it means there are more closing parentheses than opening.
                    else:
                        stack.pop()
    return not bool(stack)