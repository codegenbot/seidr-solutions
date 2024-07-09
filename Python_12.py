def longest(strings: List[str]) -> Optional[str]:
    return max(strings, key=lambda s: (len(s), s)) if strings else None