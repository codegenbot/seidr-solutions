def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if not strings[strings.index(s)]), None)