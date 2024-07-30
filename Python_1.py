parens = input("Enter parentheses: ")
result = separate_paren_groups(parens)
print(result)

def separate_paren_groups(input_str):
    stack = []
    groups = []
    current_group = ""
    
    for char in input_str:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
            if not stack:
                groups.append(current_group)
                current_group = ""
        else:
            if stack:
                current_group += char
    
    return groups