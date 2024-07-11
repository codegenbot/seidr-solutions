def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_so_far = strings[0]
    for s in strings:
        if len(s) > len(longest_so_far):
            longest_so_far = s
    return longest_so_far