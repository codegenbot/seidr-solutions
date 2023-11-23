def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    longest_str = strings[0]
    for string in strings:
        if len(string) > len(longest_str):
            longest_str = string
    return longest_str