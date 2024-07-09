```Python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        depth = 0
        max_depth = 0
        for char in group:
            if char == '(':
                depth += 1
                max_depth = max(max_depth, depth)
            elif char == ')':
                depth -= 1
        result.append(max_depth)
    return result


if __name__ == "__main__":
    paren_string = input("Enter a string with nested parentheses: ")
    print(parse_nested_parens(paren_string))