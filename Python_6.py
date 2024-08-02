```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nesting_level = 0
    max_nesting_level = 0
    for char in paren_string:
        if char == '(':
            nesting_level += 1
            max_nesting_level = max(max_nesting_level, nesting_level)
        elif char == ')':
            nesting_level -= 1
        result.append(max_nesting_level - nesting_level)
    return result