def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if not strings), None) if strings else None