from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == "(":
            stack.append(level)
            level += 1
        elif char == ")":
            level -= 1
        if level < 0:
            while stack and level + 1 != stack.pop():
                pass
            level = 0
    result.extend(stack)
    return [x - y for x, y in zip(result, [0] * (len(result) // 2 + len(result) % 2))]