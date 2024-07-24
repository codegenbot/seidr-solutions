def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [
        s
        for s in strings
        if isinstance(s, str) and isinstance(substring, str) and substring in s
    ]