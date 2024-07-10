def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                paren_string.count("(") - paren_string.rfind(")", i)
                for i in range(len(paren_string))
            ]
        )
        // 2
        for paren_string in paren_string.split()
    ]