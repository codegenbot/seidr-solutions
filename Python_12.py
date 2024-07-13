def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return next((s for s in strings if len(s) == len(longest_str)), None)