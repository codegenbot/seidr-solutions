def parse_nested_parens(paren_string: str) -> List[int]:
    def depth(paren_group: str) -> int:
        max_depth, current_depth = 0, 0
        for ch in paren_group:
            if ch == "(":
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif ch == ")":
                current_depth -= 1
        return max_depth

    return [depth(group) for group in paren_string.split()]