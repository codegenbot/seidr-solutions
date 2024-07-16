def separate_paren_groups(paren_string):
    stack = []
    output = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            group = ''
            while stack and stack[-1] != '(':
                group = stack.pop() + group
            if stack:
                stack.pop()  # Remove '(' from stack
                output.append(group)
    
    return output

paren_string = input("Enter a string with parentheses: ")
output = separate_paren_groups(paren_string)
print(output)