def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                sum(1 for char in nested if char == "(")
                for nested in group.split("(")[1:]
            ]
        )
        for group in paren_string.split()
    ]