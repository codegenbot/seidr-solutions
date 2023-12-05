def separate_paren_groups(paren_strings: tuple[str]) -> list[list[str]]:
    return [separate_paren_groups(paren_string) for paren_string in paren_strings]