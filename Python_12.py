def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if not s), None) if len(strings) else None