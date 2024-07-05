def parse_nested_parens(paren_string: str) -> List[int]:
    def max_depth(s):
        depth = max_depth = 0
        for char in s:
            if char == "(":
                depth += 1
                if depth > max_depth:
                    max_depth = depth
            elif char == ")":
                depth -= 1
        return max_depth

    groups = paren_string.split()
    return [max_depth(group) for group in groups]