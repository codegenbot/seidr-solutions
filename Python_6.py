def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                paren_string.count("(") - paren_string.find("(", i)
                for i, c in enumerate(paren_string)
                if c == ")"
            ]
        )
    ]