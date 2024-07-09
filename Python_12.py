def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if len(s) == 0:
            raise ValueError("Each string must have at least one character")
    return max(map(str, strings), key=len)