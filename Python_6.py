```
def parse_nested_parens(paren_list):
    result = []
    for paren_string in paren_list:
        level = 0
        for char in paren_string:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
        result.append(level)
    return result
```