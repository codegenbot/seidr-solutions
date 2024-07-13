def longest(strings: List[Optional[str]]) -> Optional[str]:
    max_len = 0
    result = None
    for s in strings:
        if isinstance(s, str) and len(s) > max_len:
            max_len = len(s)
            result = s
    return result