def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if not strings[string.index(s) + 1 :]), None)