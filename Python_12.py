def longest(strings: List[str]) -> Optional[str]:
    if not all(s for s in strings):
        return None
    max_length = 0
    longest_str = None
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str