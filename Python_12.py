def longest(strings: List[str]) -> Optional[str]:
    return min(strings, key=lambda x: (-len(x), x)) if strings else None