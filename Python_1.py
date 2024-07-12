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
    return result if len(stack) == 0 else []

input_string = input("Enter a string with parentheses: ")

# Check if the input string contains only parentheses and it has correct number of matching parentheses
if input_string.count('(') == input_string.count(')') and input_string[0] == '(' and input_string[-1] == ')':
    output = separate_paren_groups(input_string)
    print(output)
else:
    print("Input string is not in correct format or doesn't contain matching parentheses.")