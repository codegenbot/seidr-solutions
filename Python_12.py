def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, default=None) if not strings[0] else strings[0]