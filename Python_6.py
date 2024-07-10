def parse_nested_parens(paren_string: str) -> List[int]:
    def find_max_level(paren_group):
        max_level = 0
        current_level = 0
        for char in paren_group:
            if char == "(":
                current_level += 1
                if current_level > max_level:
                    max_level = current_level
            elif char == ")":
                current_level -= 1
        return max_level

    groups = paren_string.split()
    return [find_max_level(group) for group in groups]