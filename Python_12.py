def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    max_len = 0
    result = None

    for s in strings:
        max_len = len(s)
        result = s

    return result if max_len != 0 else None