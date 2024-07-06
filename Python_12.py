```
def longest(strings: list[str]) -> Optional[int]:
    if not strings:
        return None
    return max(len(s) for s in strings)