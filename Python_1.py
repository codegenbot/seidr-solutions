def separate_paren_groups(paren_string):
    stack = []
    result = []
    
    for char in paren_string:
        if char == '(':
            stack.append('(')
        elif char == ')':
            group = ''
            while stack and stack[-1] != '(':
                group = stack.pop() + group
            if stack:
                stack.pop()
            result.append(group)
    
    return result

print("Enter a string containing parenthesis with optional spaces:")
paren_string = input().strip()
print(separate_paren_groups(paren_string.replace(' ', '')))