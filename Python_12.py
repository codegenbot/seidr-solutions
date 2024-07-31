def longest(strings: List[str]) -> Optional[str]:
    return max(strings, default=None) if strings else None