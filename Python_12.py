def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    else:
        max_len = -1
        result = None
        for s in strings:
            if len(s) > max_len:
                max_len = len(s)
                result = s
        return result