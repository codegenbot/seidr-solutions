from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    paren_groups = paren_string.strip().split(',')
    for group in paren_groups:        
        max_nesting = 0
        current_nesting = 0
        for char in group:
            if char == '(':
                current_nesting += 1
                max_nesting = max(max_nesting, current_nesting)
            elif char == ')':
                current_nesting -= 1
        result.append(max_nesting)
    return result

paren_string = input()
print(parse_nested_parens(paren_string))