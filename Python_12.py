def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings.split(), key=lambda x: (len(x), x))