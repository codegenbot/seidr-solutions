from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    for paren in paren_string:
        if paren == "(":
            stack.append(paren)
        elif paren == ")":
            if stack and stack[-1] == "(":
                stack.pop()
            else:
                result.append(-1)
        result.append(len(stack))
    return result