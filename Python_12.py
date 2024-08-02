def longest(strings: list[str]) -> Optional[str]:
    return max(strings, key=lambda x: (len(x), x)) if strings else None