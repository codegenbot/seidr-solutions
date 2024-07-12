Here is the solution:

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        nesting_level = 0
        for char in group:
            if char == '(':
                stack.append(char)
                nesting_level += 1
            elif char == ')':
                stack.pop()
                nesting_level -= 1
        result.append(nesting_level)
    return result