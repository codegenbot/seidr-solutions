def longest(strings: list) -> str:
    if not strings:
        return None
    return max(strings, key=len)