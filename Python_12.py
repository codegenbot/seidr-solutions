def longest(strings: List[Optional[str]]) -> Optional[List[str]]:
    max_len = 0
    result = []
    for s in strings:
        if s is not None and isinstance(s, str):
            if len(s) > max_len:
                max_len = len(s)
                result = [s]
            elif len(s) == max_len:
                result.append(s)

    return result if result else None