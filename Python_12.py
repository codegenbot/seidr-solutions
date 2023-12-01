def longest(strings: List[str]) -> Optional[str]:
    return None if len(strings) == 0 else sorted(strings, key=len, reverse=True)[0]