from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    
    start = -1
    for i, char in enumerate(paren_string):
        if char == '(':
            stack.append(i)
        elif char == ')':
            if stack:
                start = stack.pop()
                result.append(paren_string[start:i+1])
    
    return result

# Corrected input passing code
input_string = "((group1)(group2))"
output = separate_paren_groups(input_string)
print(output)