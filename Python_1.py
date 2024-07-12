import sys

from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    
    start = None
    for i, char in enumerate(paren_string):
        if char == '(' or char == '{':
            if not stack:
                start = i
            stack.append(char)
        elif char == ')' or char == '}':
            stack.pop()
            if not stack:
                result.append(paren_string[start:i+1])
    
    if stack:
        result.append(paren_string[start:])
    
    return result

# Calling the function with input provided as a command line argument or as an input from user within the code
if len(sys.argv) > 1:
    input_string = sys.argv[1]
else:
    input_string = input("Enter the input string: ")

output = separate_paren_groups(input_string)
for group in output:
    print(group)