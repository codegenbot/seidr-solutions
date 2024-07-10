```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for paren in paren_string.split():
        level = 0
        for p in paren:
            if p == '(':
                stack.append(1)
                level += 1
            elif p == ')':
                if stack:
                    stack.pop()
                    level -= 1
        result.append(level)
    return result