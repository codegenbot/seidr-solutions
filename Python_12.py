def longest(strings: List[str]) -> Optional[str]:
    return max(strings or [None], key=len) if strings else None