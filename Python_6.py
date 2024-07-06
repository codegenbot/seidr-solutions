```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nested = 0
    for char in paren_string:
        if char == '(':
            nested += 1
        elif char == ')':
            nested -= 1
        if nested > (max := len(result)):
            result.append(nested)
        elif nested < 0:
            while nested < 0:
                if result.pop() == max - 1:
                    break
    return result