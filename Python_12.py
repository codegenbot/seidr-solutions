```
def longest(strings: list[str]) -> str | None:
    if not strings:
        return None
    
    max_len = 0
    result = None

    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            result = s

    return result