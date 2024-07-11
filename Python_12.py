def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)