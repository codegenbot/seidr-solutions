```
import re
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in re.findall(r'\([^()]+?\)', paren_string):
        level = 0
        max_level = 0
        for char in group[1:-1]:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        result.append(max_level + 1) 
    return result

paren_string = input("Enter a string with nested parentheses: ")
print(parse_nested_parens(paren_string))