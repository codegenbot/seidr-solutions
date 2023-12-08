def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    else:
        return max(strings, key=len)