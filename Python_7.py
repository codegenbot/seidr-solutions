def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(substring, str):
        return []
    return [s for s in strings if substring in s]