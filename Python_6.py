from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    temp = ''
    result = []
    for char in paren_string:
        if char == '(' or char == ')':
            temp += char
        elif char == ' ' and temp:
            result.append(eval(temp))
            temp = ''
    else:
        result.append(eval(temp))
    return result