```
def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == "(":
            stack.append(level + 1)
            level += 1
        elif char == ")":
            if stack:
                stack.pop()
                if not stack:
                    result.append(level - 1)
            level -= 1
            while stack and stack[-1] > level:
                stack.pop()
                level -= 1
    return result