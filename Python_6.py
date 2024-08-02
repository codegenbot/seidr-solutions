```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                stack.append(1)
                while stack and stack[-1] != '(':
                    stack.pop()
                if stack and stack.pop() == '(':
                    result.append(len(stack))
    return [0] + result