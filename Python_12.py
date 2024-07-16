def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = len(max(strings, key=len))
    return next(s for s in strings if len(s) == max_length)