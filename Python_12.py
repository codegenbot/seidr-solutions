def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return max((s for s in map(str, filter(lambda x: isinstance(x, str), strings))), key=len)