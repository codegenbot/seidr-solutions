def longest(strings: List[str]) -> Optional[str]:
    return max(strings or [""], key=len) if strings else None