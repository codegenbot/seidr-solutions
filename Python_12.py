def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    
    max_len = 0
    results = []

    for s in sorted(strings, key=len):
        if len(s) > max_len:
            max_len = len(s)
            results = [s]
        elif len(s) == max_len:
            results.append(s)

    return results