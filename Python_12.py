def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_string = None
    for string in strings:
        if len(string) > max_len:
            max_len = len(string)
            longest_string = string
    return longest_string