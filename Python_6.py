def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([i for char in group.split("()") for i in range(len(char) // 2)])
        for group in paren_string.split()
    ]