def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return min(filter(lambda x: len(x) == len(longest_str), strings))