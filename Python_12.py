def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = len(strings[0])
    max_string = strings[0]
    for string in strings[1:]:
        if len(string) > max_len:
            max_len = len(string)
            max_string = string
    return max_string