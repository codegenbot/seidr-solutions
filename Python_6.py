```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nesting_level = 0
    for char in paren_string:
        if char == '(':
            nesting_level += 1
        elif char == ')':
            nesting_level -= 1
        if char != ' ': 
            if char == '(':
                result.append(nesting_level + 1)
            elif char == ')':
                result.append(-result.pop() - 1)
    return result