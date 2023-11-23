def separate_paren_groups(paren_string: str) -> List[str]:
    return ["".join(paren for paren in paren_group if paren != " ") for paren_group in paren_string.split(")")]