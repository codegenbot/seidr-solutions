def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    result = strings[0]
    for string in strings:
        if len(string) > max_len:
            max_len = len(string)
            result = string
    return result