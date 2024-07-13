def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = max(strings, key=len)
    return next((s for s in strings if len(s) == len(longest_string)), None)