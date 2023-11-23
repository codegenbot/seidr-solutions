def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    else:
        return max(strings, key=len)