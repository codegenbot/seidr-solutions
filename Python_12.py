def longest(strings: List[str]) -> Optional[str]:
    return max(strings, key=lambda x: (len(x), x), default=None)