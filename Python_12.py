def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = len(strings[0])
    max_string = strings[0]
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            max_string = s
    return max_string