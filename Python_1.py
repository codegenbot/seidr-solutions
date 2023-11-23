def separate_paren_groups(paren_string: str) -> List[str]:
    return [x.replace(' ', '') for x in paren_string.split(')(')]