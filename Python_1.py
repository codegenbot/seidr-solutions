from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                temp_str += char
                result.append(temp_str)
                temp_str = ''
            else:
                if stack:  # Check if there are unmatched '(' left.
                    temp_str += char
                else:  # If not, add the last string to the result.
                    result.append(temp_str)
    
    return result