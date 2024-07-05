def parse_nested_parens(paren_string: str) -> List[int]:
    def get_max_depth(s):
        max_depth, current_depth = 0, 0
        for char in s:
            if char == "(":
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ")":
                current_depth -= 1
        return max_depth

    return [get_max_depth(group) for group in paren_string.split()]