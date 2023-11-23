def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    longest_str = strings[0]
    for s in strings:
        if len(s) > len(longest_str):
            longest_str = s
    return longest_str