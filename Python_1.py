```
def separate_paren_groups(input_str):
    return balance_groups(input_str)

def balance_groups(input_str):
    output = []
    stack = []
    for char in input_str:
        if char == '(':
            stack.append(char)
            output.append("(")
        elif char == ')':
            if stack:
                stack.pop()
                output.append(")")
            else:
                return "Invalid parentheses"
    if stack:
        while stack:
            stack.pop()
            output.append(")")
    return output