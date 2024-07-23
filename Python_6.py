```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    max_level = 0
    for char in paren_string:
        if char == '(':
            if level > max_level:
                max_level = level
            level += 1
        elif char == ')':
            level -= 1
    result.append(max_level)
    return result