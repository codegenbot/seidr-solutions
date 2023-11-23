def longest(strings: List[str]) -> Optional[str]:
    if strings:
        return max(strings, key=len)
    else:
        return None