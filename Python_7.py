def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return list(filter(lambda s: substring in s, strings))