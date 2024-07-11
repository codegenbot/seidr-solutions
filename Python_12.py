def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    strings = [str(s) for s in strings]
    return max((s for s in strings if s), key=len)