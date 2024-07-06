def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if not strings.index(s)), None) if strings else None