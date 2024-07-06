```
def parse_nested_parens(paren_string: str) -> int:
    nesting_level = 0
    for char in paren_string:
        if char == '(':
            nesting_level += 1
        elif char == ')':
            if nesting_level > 0:
                nesting_level -= 1
    return nesting_level

if __name__ == "__main__":
    print(parse_nested_parens("((()))"))