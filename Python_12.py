def longest(strings: List[str]) -> Optional[int]:
    if not strings or all(not s for s in strings):
        return 0
    return max(len(s) for s in strings if len(s) > 0)