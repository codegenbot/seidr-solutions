def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                paren_string.count("(") - paren_string[:i].count(")")
                for i in range(len(paren_string))
                if paren_string[i] == ")"
            ]
        )
    ]