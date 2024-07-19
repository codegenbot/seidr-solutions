def parse_nested_parens(paren_string: str) -> List[int]:
    def count_nested_parens(s):
        max_depth = 0
        depth = 0
        for char in s:
            if char == "(":
                depth += 1
                max_depth = max(max_depth, depth)
            elif char == ")":
                depth -= 1
        return max_depth

    groups = paren_string.split()
    depths = [count_nested_parens(group) for group in groups]
    return depths