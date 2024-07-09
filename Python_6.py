```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp = 0
    for char in paren_string:
        if char == '(':
            temp += 1
        elif char == ')':
            temp -= 1
        if temp == 0:
            result.append(paren_string[:paren_string.index(char)+1].count('('))
            paren_string = paren_string[paren_string.index(char)+1:]
    return [temp] + result