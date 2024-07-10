```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    group_depths = []
    depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
            group_depths.append(depth)
        elif char == ')':
            depth -= 1
    return [depth for depth, level in zip(group_depths, [i for i in range(len(group_depths))]) if level == 0]